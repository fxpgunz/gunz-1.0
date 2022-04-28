#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Tvs_1_1 /FhInclude/skin.h /VnskinData Source/skin.hlsl /O3
//
//
// Parameters:
//
//   float4 AnimationMatrices[1000];
//   float4 GlobalAmbient;
//   float4 Light0Ambient;
//   float4 Light0Attenuation;
//   float4 Light0Diffuse;
//   float3 Light0Position;
//   float4 Light1Ambient;
//   float4 Light1Attenuation;
//   float4 Light1Diffuse;
//   float3 Light1Position;
//   float4 MaterialAmbient;
//   float4 MaterialDiffuse;
//   float4x4 ViewProjection;
//   float4x3 World;
//
//
// Registers:
//
//   Name              Reg   Size
//   ----------------- ----- ----
//   World             c3       3
//   ViewProjection    c6       4
//   MaterialAmbient   c12      1
//   MaterialDiffuse   c13      1
//   GlobalAmbient     c16      1
//   Light0Position    c17      1
//   Light0Ambient     c18      1
//   Light0Diffuse     c19      1
//   Light1Position    c22      1
//   Light1Ambient     c23      1
//   Light1Diffuse     c24      1
//   Light0Attenuation c27      1
//   Light1Attenuation c28      1
//   AnimationMatrices c29   1000
//

    vs_1_1
    def c0, 1, 0, 0, 0
    dcl_position v0
    dcl_blendweight v1
    dcl_blendindices v2
    dcl_normal v3
    dcl_texcoord v4
    add r0.x, v1.y, v1.x
    add r0.x, -r0.x, c0.x
    slt r0.yzw, v2.xxyz, -v2.xxyz
    frc r4.y, v2.z
    mov r1.z, r4.y
    frc r1.xy, v2
    add r2.xyz, -r1, v2
    slt r1.xyz, -r1, r1
    mad r0.yzw, r0, r1.xxyz, r2.xxyz
    mov a0.x, r0.z
    dp4 r1.x, v0, c29[a0.x]
    dp4 r1.y, v0, c30[a0.x]
    dp4 r1.z, v0, c31[a0.x]
    mul r1.xyz, r1, v1.y
    mov a0.x, r0.y
    dp4 r2.x, v0, c29[a0.x]
    dp4 r2.y, v0, c30[a0.x]
    dp4 r2.z, v0, c31[a0.x]
    mad r1.xyz, r2, v1.x, r1
    mov a0.x, r0.w
    dp4 r2.x, v0, c29[a0.x]
    dp4 r2.y, v0, c30[a0.x]
    dp4 r2.z, v0, c31[a0.x]
    mad r1.xyz, r2, r0.x, r1
    mov r1.w, c0.x
    dp4 r2.x, r1, c3
    dp4 r2.y, r1, c4
    dp4 r2.z, r1, c5
    mov r2.w, c0.x
    dp4 oPos.x, r2, c6
    dp4 oPos.y, r2, c7
    dp4 oPos.z, r2, c8
    dp4 oPos.w, r2, c9
    mov a0.x, r0.z
    dp3 r1.x, v3, c29[a0.x]
    dp3 r1.y, v3, c30[a0.x]
    dp3 r1.z, v3, c31[a0.x]
    mul r1.xyz, r1, v1.y
    mov a0.x, r0.y
    dp3 r3.x, v3, c29[a0.x]
    dp3 r3.y, v3, c30[a0.x]
    dp3 r3.z, v3, c31[a0.x]
    mad r1.xyz, r3, v1.x, r1
    mov a0.x, r0.w
    dp3 r3.x, v3, c29[a0.x]
    dp3 r3.y, v3, c30[a0.x]
    dp3 r3.z, v3, c31[a0.x]
    mad r0.xyz, r3, r0.x, r1
    add r1.xyz, -r2, c17
    add r2.xyz, -r2, c22
    dp3 r0.w, r1, r1
    rsq r3.y, r0.w
    mul r1.xyz, r1, r3.y
    dp3 r1.x, r0, r1
    max r1.x, r1.x, c0.y
    mov r3.xz, c0.x
    mul r3.yz, r0.w, r3
    dp3 r0.w, r3, c27
    rcp r0.w, r0.w
    mul r0.w, r0.w, r1.x
    dp3 r1.x, r2, r2
    rsq r1.y, r1.x
    mul r2.xyz, r1.y, r2
    dp3 r0.x, r0, r2
    max r0.x, r0.x, c0.y
    mov r1.z, c0.x
    mul r1.yz, r1, r1.x
    mov r1.x, c0.x
    dp3 r0.y, r1, c28
    rcp r0.y, r0.y
    mul r0.x, r0.y, r0.x
    mul r0.xyz, r0.x, c24
    mad r0.xyz, c19, r0.w, r0
    mov r1.xyz, c18
    add r1.xyz, r1, c23
    add r1.xyz, r1, c16
    mul r1.xyz, r1, c12
    mad oD0.xyz, r0, c13, r1
    mov oT0.xy, v4
    mov oD0.w, c13.w
    mov oFog, c0.x

// approximately 85 instruction slots used
#endif

const BYTE skinData[] =
{
      1,   1, 254, 255, 254, 255, 
    166,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  99,   2, 
      0,   0,   1,   1, 254, 255, 
     14,   0,   0,   0,  28,   0, 
      0,   0,   0, 129,   0,   0, 
     92,   2,   0,   0,  52,   1, 
      0,   0,   2,   0,  29,   0, 
    232,   3, 118,   0,  72,   1, 
      0,   0,   0,   0,   0,   0, 
     88,   1,   0,   0,   2,   0, 
     16,   0,   1,   0,  66,   0, 
    104,   1,   0,   0,   0,   0, 
      0,   0, 120,   1,   0,   0, 
      2,   0,  18,   0,   1,   0, 
     74,   0, 104,   1,   0,   0, 
      0,   0,   0,   0, 134,   1, 
      0,   0,   2,   0,  27,   0, 
      1,   0, 110,   0, 104,   1, 
      0,   0,   0,   0,   0,   0, 
    152,   1,   0,   0,   2,   0, 
     19,   0,   1,   0,  78,   0, 
    104,   1,   0,   0,   0,   0, 
      0,   0, 166,   1,   0,   0, 
      2,   0,  17,   0,   1,   0, 
     70,   0, 184,   1,   0,   0, 
      0,   0,   0,   0, 200,   1, 
      0,   0,   2,   0,  23,   0, 
      1,   0,  94,   0, 104,   1, 
      0,   0,   0,   0,   0,   0, 
    214,   1,   0,   0,   2,   0, 
     28,   0,   1,   0, 114,   0, 
    104,   1,   0,   0,   0,   0, 
      0,   0, 232,   1,   0,   0, 
      2,   0,  24,   0,   1,   0, 
     98,   0, 104,   1,   0,   0, 
      0,   0,   0,   0, 246,   1, 
      0,   0,   2,   0,  22,   0, 
      1,   0,  90,   0, 184,   1, 
      0,   0,   0,   0,   0,   0, 
      5,   2,   0,   0,   2,   0, 
     12,   0,   1,   0,  50,   0, 
    104,   1,   0,   0,   0,   0, 
      0,   0,  21,   2,   0,   0, 
      2,   0,  13,   0,   1,   0, 
     54,   0, 104,   1,   0,   0, 
      0,   0,   0,   0,  37,   2, 
      0,   0,   2,   0,   6,   0, 
      4,   0,  26,   0,  52,   2, 
      0,   0,   0,   0,   0,   0, 
     68,   2,   0,   0,   2,   0, 
      3,   0,   3,   0,  14,   0, 
     76,   2,   0,   0,   0,   0, 
      0,   0,  65, 110, 105, 109, 
     97, 116, 105, 111, 110,  77, 
     97, 116, 114, 105,  99, 101, 
    115,   0, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
    232,   3,   0,   0,   0,   0, 
      0,   0,  71, 108, 111,  98, 
     97, 108,  65, 109,  98, 105, 
    101, 110, 116,   0, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  76, 105, 
    103, 104, 116,  48,  65, 109, 
     98, 105, 101, 110, 116,   0, 
     76, 105, 103, 104, 116,  48, 
     65, 116, 116, 101, 110, 117, 
     97, 116, 105, 111, 110,   0, 
     76, 105, 103, 104, 116,  48, 
     68, 105, 102, 102, 117, 115, 
    101,   0,  76, 105, 103, 104, 
    116,  48,  80, 111, 115, 105, 
    116, 105, 111, 110,   0, 171, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   3,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     76, 105, 103, 104, 116,  49, 
     65, 109,  98, 105, 101, 110, 
    116,   0,  76, 105, 103, 104, 
    116,  49,  65, 116, 116, 101, 
    110, 117,  97, 116, 105, 111, 
    110,   0,  76, 105, 103, 104, 
    116,  49,  68, 105, 102, 102, 
    117, 115, 101,   0,  76, 105, 
    103, 104, 116,  49,  80, 111, 
    115, 105, 116, 105, 111, 110, 
      0,  77,  97, 116, 101, 114, 
    105,  97, 108,  65, 109,  98, 
    105, 101, 110, 116,   0,  77, 
     97, 116, 101, 114, 105,  97, 
    108,  68, 105, 102, 102, 117, 
    115, 101,   0,  86, 105, 101, 
    119,  80, 114, 111, 106, 101, 
     99, 116, 105, 111, 110,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  87, 111, 
    114, 108, 100,   0, 171, 171, 
      3,   0,   3,   0,   4,   0, 
      3,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 118, 115, 
     95,  49,  95,  49,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     81,   0,   0,   0,   0,   0, 
     15, 160,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   0,   0,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   0,   1,   0, 
      0, 128,   1,   0,  15, 144, 
     31,   0,   0,   0,   2,   0, 
      0, 128,   2,   0,  15, 144, 
     31,   0,   0,   0,   3,   0, 
      0, 128,   3,   0,  15, 144, 
     31,   0,   0,   0,   5,   0, 
      0, 128,   4,   0,  15, 144, 
      2,   0,   0,   0,   0,   0, 
      1, 128,   1,   0,  85, 144, 
      1,   0,   0, 144,   2,   0, 
      0,   0,   0,   0,   1, 128, 
      0,   0,   0, 129,   0,   0, 
      0, 160,  12,   0,   0,   0, 
      0,   0,  14, 128,   2,   0, 
    144, 144,   2,   0, 144, 145, 
     19,   0,   0,   0,   4,   0, 
      2, 128,   2,   0, 170, 144, 
      1,   0,   0,   0,   1,   0, 
      4, 128,   4,   0,  85, 128, 
     19,   0,   0,   0,   1,   0, 
      3, 128,   2,   0, 228, 144, 
      2,   0,   0,   0,   2,   0, 
      7, 128,   1,   0, 228, 129, 
      2,   0, 228, 144,  12,   0, 
      0,   0,   1,   0,   7, 128, 
      1,   0, 228, 129,   1,   0, 
    228, 128,   4,   0,   0,   0, 
      0,   0,  14, 128,   0,   0, 
    228, 128,   1,   0, 144, 128, 
      2,   0, 144, 128,   1,   0, 
      0,   0,   0,   0,   1, 176, 
      0,   0, 170, 128,   9,   0, 
      0,   0,   1,   0,   1, 128, 
      0,   0, 228, 144,  29,  32, 
    228, 160,   9,   0,   0,   0, 
      1,   0,   2, 128,   0,   0, 
    228, 144,  30,  32, 228, 160, 
      9,   0,   0,   0,   1,   0, 
      4, 128,   0,   0, 228, 144, 
     31,  32, 228, 160,   5,   0, 
      0,   0,   1,   0,   7, 128, 
      1,   0, 228, 128,   1,   0, 
     85, 144,   1,   0,   0,   0, 
      0,   0,   1, 176,   0,   0, 
     85, 128,   9,   0,   0,   0, 
      2,   0,   1, 128,   0,   0, 
    228, 144,  29,  32, 228, 160, 
      9,   0,   0,   0,   2,   0, 
      2, 128,   0,   0, 228, 144, 
     30,  32, 228, 160,   9,   0, 
      0,   0,   2,   0,   4, 128, 
      0,   0, 228, 144,  31,  32, 
    228, 160,   4,   0,   0,   0, 
      1,   0,   7, 128,   2,   0, 
    228, 128,   1,   0,   0, 144, 
      1,   0, 228, 128,   1,   0, 
      0,   0,   0,   0,   1, 176, 
      0,   0, 255, 128,   9,   0, 
      0,   0,   2,   0,   1, 128, 
      0,   0, 228, 144,  29,  32, 
    228, 160,   9,   0,   0,   0, 
      2,   0,   2, 128,   0,   0, 
    228, 144,  30,  32, 228, 160, 
      9,   0,   0,   0,   2,   0, 
      4, 128,   0,   0, 228, 144, 
     31,  32, 228, 160,   4,   0, 
      0,   0,   1,   0,   7, 128, 
      2,   0, 228, 128,   0,   0, 
      0, 128,   1,   0, 228, 128, 
      1,   0,   0,   0,   1,   0, 
      8, 128,   0,   0,   0, 160, 
      9,   0,   0,   0,   2,   0, 
      1, 128,   1,   0, 228, 128, 
      3,   0, 228, 160,   9,   0, 
      0,   0,   2,   0,   2, 128, 
      1,   0, 228, 128,   4,   0, 
    228, 160,   9,   0,   0,   0, 
      2,   0,   4, 128,   1,   0, 
    228, 128,   5,   0, 228, 160, 
      1,   0,   0,   0,   2,   0, 
      8, 128,   0,   0,   0, 160, 
      9,   0,   0,   0,   0,   0, 
      1, 192,   2,   0, 228, 128, 
      6,   0, 228, 160,   9,   0, 
      0,   0,   0,   0,   2, 192, 
      2,   0, 228, 128,   7,   0, 
    228, 160,   9,   0,   0,   0, 
      0,   0,   4, 192,   2,   0, 
    228, 128,   8,   0, 228, 160, 
      9,   0,   0,   0,   0,   0, 
      8, 192,   2,   0, 228, 128, 
      9,   0, 228, 160,   1,   0, 
      0,   0,   0,   0,   1, 176, 
      0,   0, 170, 128,   8,   0, 
      0,   0,   1,   0,   1, 128, 
      3,   0, 228, 144,  29,  32, 
    228, 160,   8,   0,   0,   0, 
      1,   0,   2, 128,   3,   0, 
    228, 144,  30,  32, 228, 160, 
      8,   0,   0,   0,   1,   0, 
      4, 128,   3,   0, 228, 144, 
     31,  32, 228, 160,   5,   0, 
      0,   0,   1,   0,   7, 128, 
      1,   0, 228, 128,   1,   0, 
     85, 144,   1,   0,   0,   0, 
      0,   0,   1, 176,   0,   0, 
     85, 128,   8,   0,   0,   0, 
      3,   0,   1, 128,   3,   0, 
    228, 144,  29,  32, 228, 160, 
      8,   0,   0,   0,   3,   0, 
      2, 128,   3,   0, 228, 144, 
     30,  32, 228, 160,   8,   0, 
      0,   0,   3,   0,   4, 128, 
      3,   0, 228, 144,  31,  32, 
    228, 160,   4,   0,   0,   0, 
      1,   0,   7, 128,   3,   0, 
    228, 128,   1,   0,   0, 144, 
      1,   0, 228, 128,   1,   0, 
      0,   0,   0,   0,   1, 176, 
      0,   0, 255, 128,   8,   0, 
      0,   0,   3,   0,   1, 128, 
      3,   0, 228, 144,  29,  32, 
    228, 160,   8,   0,   0,   0, 
      3,   0,   2, 128,   3,   0, 
    228, 144,  30,  32, 228, 160, 
      8,   0,   0,   0,   3,   0, 
      4, 128,   3,   0, 228, 144, 
     31,  32, 228, 160,   4,   0, 
      0,   0,   0,   0,   7, 128, 
      3,   0, 228, 128,   0,   0, 
      0, 128,   1,   0, 228, 128, 
      2,   0,   0,   0,   1,   0, 
      7, 128,   2,   0, 228, 129, 
     17,   0, 228, 160,   2,   0, 
      0,   0,   2,   0,   7, 128, 
      2,   0, 228, 129,  22,   0, 
    228, 160,   8,   0,   0,   0, 
      0,   0,   8, 128,   1,   0, 
    228, 128,   1,   0, 228, 128, 
      7,   0,   0,   0,   3,   0, 
      2, 128,   0,   0, 255, 128, 
      5,   0,   0,   0,   1,   0, 
      7, 128,   1,   0, 228, 128, 
      3,   0,  85, 128,   8,   0, 
      0,   0,   1,   0,   1, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 128,  11,   0,   0,   0, 
      1,   0,   1, 128,   1,   0, 
      0, 128,   0,   0,  85, 160, 
      1,   0,   0,   0,   3,   0, 
      5, 128,   0,   0,   0, 160, 
      5,   0,   0,   0,   3,   0, 
      6, 128,   0,   0, 255, 128, 
      3,   0, 228, 128,   8,   0, 
      0,   0,   0,   0,   8, 128, 
      3,   0, 228, 128,  27,   0, 
    228, 160,   6,   0,   0,   0, 
      0,   0,   8, 128,   0,   0, 
    255, 128,   5,   0,   0,   0, 
      0,   0,   8, 128,   0,   0, 
    255, 128,   1,   0,   0, 128, 
      8,   0,   0,   0,   1,   0, 
      1, 128,   2,   0, 228, 128, 
      2,   0, 228, 128,   7,   0, 
      0,   0,   1,   0,   2, 128, 
      1,   0,   0, 128,   5,   0, 
      0,   0,   2,   0,   7, 128, 
      1,   0,  85, 128,   2,   0, 
    228, 128,   8,   0,   0,   0, 
      0,   0,   1, 128,   0,   0, 
    228, 128,   2,   0, 228, 128, 
     11,   0,   0,   0,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0,  85, 160,   1,   0, 
      0,   0,   1,   0,   4, 128, 
      0,   0,   0, 160,   5,   0, 
      0,   0,   1,   0,   6, 128, 
      1,   0, 228, 128,   1,   0, 
      0, 128,   1,   0,   0,   0, 
      1,   0,   1, 128,   0,   0, 
      0, 160,   8,   0,   0,   0, 
      0,   0,   2, 128,   1,   0, 
    228, 128,  28,   0, 228, 160, 
      6,   0,   0,   0,   0,   0, 
      2, 128,   0,   0,  85, 128, 
      5,   0,   0,   0,   0,   0, 
      1, 128,   0,   0,  85, 128, 
      0,   0,   0, 128,   5,   0, 
      0,   0,   0,   0,   7, 128, 
      0,   0,   0, 128,  24,   0, 
    228, 160,   4,   0,   0,   0, 
      0,   0,   7, 128,  19,   0, 
    228, 160,   0,   0, 255, 128, 
      0,   0, 228, 128,   1,   0, 
      0,   0,   1,   0,   7, 128, 
     18,   0, 228, 160,   2,   0, 
      0,   0,   1,   0,   7, 128, 
      1,   0, 228, 128,  23,   0, 
    228, 160,   2,   0,   0,   0, 
      1,   0,   7, 128,   1,   0, 
    228, 128,  16,   0, 228, 160, 
      5,   0,   0,   0,   1,   0, 
      7, 128,   1,   0, 228, 128, 
     12,   0, 228, 160,   4,   0, 
      0,   0,   0,   0,   7, 208, 
      0,   0, 228, 128,  13,   0, 
    228, 160,   1,   0, 228, 128, 
      1,   0,   0,   0,   0,   0, 
      3, 224,   4,   0, 228, 144, 
      1,   0,   0,   0,   0,   0, 
      8, 208,  13,   0, 255, 160, 
      1,   0,   0,   0,   1,   0, 
     15, 192,   0,   0,   0, 160, 
    255, 255,   0,   0
};
