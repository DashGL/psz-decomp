// FUN_02036c34 @ 0x02036c34 (0x30)
// Fixed-point Q20.12 product of FUN_02036c64(p) and FUN_0207f920(p + 0x64)
// with rounding (+0x800 >> 12) via FUN_0200a380 (_ull_mul).
typedef long long s64;
typedef int s32;

extern s64 FUN_0200a380(s64 a, s64 b);
extern s32 FUN_02036c64(void *p);
extern s32 FUN_0207f920(void *p);

s32 FUN_02036c34(char *p) {
    s32 a = FUN_02036c64(p);
    s32 b = FUN_0207f920(p + 0x64);
    return (s32)((FUN_0200a380(a, b) + 0x800) >> 12);
}
