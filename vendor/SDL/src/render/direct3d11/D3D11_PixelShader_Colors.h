#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer Constants
// {
//
//   float scRGB_output;                // Offset:    0 Size:     4
//   float SDR_whitelevel;              // Offset:    4 Size:     4
//   float HDR_whitelevel;              // Offset:    8 Size:     4 [unused]
//   float maxCLL;                      // Offset:   12 Size:     4 [unused]
//   float4 Yoffset;                    // Offset:   16 Size:    16 [unused]
//   float4 Rcoeff;                     // Offset:   32 Size:    16 [unused]
//   float4 Gcoeff;                     // Offset:   48 Size:    16 [unused]
//   float4 Bcoeff;                     // Offset:   64 Size:    16 [unused]
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// Constants                         cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float       
// COLOR                    0   xyzw        2     NONE   float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c0         cb0             0         1  ( FLT, FLT, FLT, FLT)
//
//
// Level9 shader bytecode:
//
    ps_2_0
    def c1, 0.0125000002, 1, 0, 0
    dcl t1
    mul r0.w, c0.x, c0.x
    mov r0.x, c1.x
    mul r0.x, r0.x, c0.y
    cmp r0.xyz, -r0.w, c1.y, r0.x
    mov r0.w, c1.y
    mul r0, r0, t1
    mov oC0, r0

// approximately 7 instruction slots used
ps_4_0
dcl_constantbuffer CB0[1], immediateIndexed
dcl_input_ps linear v2.xyzw
dcl_output o0.xyzw
dcl_temps 1
ne r0.x, l(0.000000, 0.000000, 0.000000, 0.000000), cb0[0].x
mul r0.y, cb0[0].y, l(0.012500)
movc r0.xyz, r0.xxxx, r0.yyyy, l(1.000000,1.000000,1.000000,0)
mov r0.w, l(1.000000)
mul o0.xyzw, r0.xyzw, v2.xyzw
ret 
// Approximately 6 instruction slots used
#endif

const BYTE g_main[] =
{
     68,  88,  66,  67, 132,  13, 
    165,  35,  17, 157, 163, 217, 
    158,  71, 117, 171,  46, 252, 
      9, 215,   1,   0,   0,   0, 
    224,   4,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
      4,   1,   0,   0, 244,   1, 
      0,   0, 112,   2,   0,   0, 
     56,   4,   0,   0, 172,   4, 
      0,   0,  65, 111, 110,  57, 
    196,   0,   0,   0, 196,   0, 
      0,   0,   0,   2, 255, 255, 
    148,   0,   0,   0,  48,   0, 
      0,   0,   1,   0,  36,   0, 
      0,   0,  48,   0,   0,   0, 
     48,   0,   0,   0,  36,   0, 
      0,   0,  48,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   2, 
    255, 255,  81,   0,   0,   5, 
      1,   0,  15, 160, 205, 204, 
     76,  60,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   1,   0, 
     15, 176,   5,   0,   0,   3, 
      0,   0,   8, 128,   0,   0, 
      0, 160,   0,   0,   0, 160, 
      1,   0,   0,   2,   0,   0, 
      1, 128,   1,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0,  85, 160,  88,   0, 
      0,   4,   0,   0,   7, 128, 
      0,   0, 255, 129,   1,   0, 
     85, 160,   0,   0,   0, 128, 
      1,   0,   0,   2,   0,   0, 
      8, 128,   1,   0,  85, 160, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      1,   0, 228, 176,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      0,   0, 228, 128, 255, 255, 
      0,   0,  83,  72,  68,  82, 
    232,   0,   0,   0,  64,   0, 
      0,   0,  58,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  98,  16, 
      0,   3, 242,  16,  16,   0, 
      2,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   1,   0,   0,   0, 
     57,   0,   0,  11,  18,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
    205, 204,  76,  60,  55,   0, 
      0,  12, 114,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     56,   0,   0,   7, 242,  32, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70,  30,  16,   0, 
      2,   0,   0,   0,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    116,   0,   0,   0,   6,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     82,  68,  69,  70, 192,   1, 
      0,   0,   1,   0,   0,   0, 
     72,   0,   0,   0,   1,   0, 
      0,   0,  28,   0,   0,   0, 
      0,   4, 255, 255,   0,   1, 
      0,   0, 149,   1,   0,   0, 
     60,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,  67, 111, 110, 115, 
    116,  97, 110, 116, 115,   0, 
    171, 171,  60,   0,   0,   0, 
      8,   0,   0,   0,  96,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  32,   1,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0,  64,   1,   0,   0, 
      4,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0,  79,   1,   0,   0, 
      8,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0,  94,   1,   0,   0, 
     12,   0,   0,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0, 101,   1,   0,   0, 
     16,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 128,   1,   0,   0, 
     32,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 135,   1,   0,   0, 
     48,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 142,   1,   0,   0, 
     64,   0,   0,   0,  16,   0, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0,   0,   0, 
      0,   0, 115,  99,  82,  71, 
     66,  95, 111, 117, 116, 112, 
    117, 116,   0, 171, 171, 171, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  83,  68, 
     82,  95, 119, 104, 105, 116, 
    101, 108, 101, 118, 101, 108, 
      0,  72,  68,  82,  95, 119, 
    104, 105, 116, 101, 108, 101, 
    118, 101, 108,   0, 109,  97, 
    120,  67,  76,  76,   0,  89, 
    111, 102, 102, 115, 101, 116, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  82,  99, 111, 101, 
    102, 102,   0,  71,  99, 111, 
    101, 102, 102,   0,  66,  99, 
    111, 101, 102, 102,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171, 171, 171, 
     73,  83,  71,  78, 108,   0, 
      0,   0,   3,   0,   0,   0, 
      8,   0,   0,   0,  80,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  92,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0, 101,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
     15,  15,   0,   0,  83,  86, 
     95,  80,  79,  83,  73,  84, 
     73,  79,  78,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  67,  79,  76,  79,  82, 
      0, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  65,  82, 
     71,  69,  84,   0, 171, 171
};
