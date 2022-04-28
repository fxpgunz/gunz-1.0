#include "stdafx.h"
#include "MAsyncDBJob_GetLoginInfo.h"
#include "MMatchPremiumIPCache.h"

void MAsyncDBJob_GetLoginInfo::Run(void* pContext)
{
	_ASSERT(m_pAccountInfo);

	auto* pDBMgr = static_cast<IDatabase*>(pContext);

	// ���� ������ �ݸ��� �����Ƿ� �ش� ������ ������ ���� �����Ѵ�. 
	if (!pDBMgr->GetLoginInfo(m_szUserID, &m_nAID, m_szDBPassword))
	{
		int nGunzSex;	// �������� �������� �ݸ��� �������� �ݴ��̴�.
		if (m_nSex == 0) nGunzSex = 1; else nGunzSex = 0;

		int nCert = 0;
		if (strlen(m_szCertificate) > 0)
		{
			if (m_szCertificate[0] == '1') nCert =1;
		}

		pDBMgr->CreateAccount(m_szUserID, m_szUniqueID, nCert, m_szName, m_nAge, nGunzSex);

		pDBMgr->GetLoginInfo(m_szUserID, &m_nAID, m_szDBPassword);
	}

	// ���� ������ �д´�.
	if (!pDBMgr->GetAccountInfo(m_nAID, m_pAccountInfo))
	{
		SetResult(MASYNC_RESULT_FAILED);
		// ���� ���������
//		Disconnect(CommUID);

		return;
	}


	// �����̾� IP�� üũ�Ѵ�.
	if (m_bCheckPremiumIP)
	{
		bool bIsPremiumIP = false;
		bool bExistPremiumIPCache = false;
		
		bExistPremiumIPCache = MPremiumIPCache()->CheckPremiumIP(m_dwIP, bIsPremiumIP);

		// ���� ĳ���� ������ ���� DB���� ã���� �Ѵ�.
		if (!bExistPremiumIPCache)
		{
			if (pDBMgr->CheckPremiumIP(m_szIP, bIsPremiumIP))
			{
				// ����� ĳ���� ����
				MPremiumIPCache()->AddIP(m_dwIP, bIsPremiumIP);
			}
			else
			{
				MPremiumIPCache()->OnDBFailed();
			}

		}

		if (bIsPremiumIP) m_pAccountInfo->m_nPGrade = MMPG_PREMIUM_IP;
	}

	SetResult(MASYNC_RESULT_SUCCEED);
}


bool MAsyncDBJob_GetLoginInfo::Input(MMatchAccountInfo* pNewAccountInfo,
			const char* szUserID, 
			const char* szUniqueID, 
			const char* szCertificate, 
			const char* szName, 
			const int nAge, 
			const int nSex,
			const bool bFreeLoginIP,
			u32 nChecksumPack,
			const bool bCheckPremiumIP,
			const char* szIP,
            u32 dwIP,
			const string& strCountryCode3)
{
	m_pAccountInfo = pNewAccountInfo;
	strcpy_safe(m_szUserID, szUserID);
	strcpy_safe(m_szUniqueID, szUniqueID);
	strcpy_safe(m_szCertificate, szCertificate);
	strcpy_safe(m_szName, szName);
	m_nAge = nAge;
	m_nSex = nSex;
	m_bFreeLoginIP = bFreeLoginIP;
	m_nChecksumPack = nChecksumPack;
	m_bCheckPremiumIP = bCheckPremiumIP;
	strcpy_safe(m_szIP, szIP);
	m_dwIP = dwIP;
	if( 3 == strCountryCode3.length() )
		m_strCountryCode3 = strCountryCode3;
	else
		m_strCountryCode3 = "Err";

	return true;
}
