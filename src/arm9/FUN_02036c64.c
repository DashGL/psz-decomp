// FUN_02036c64 @ 0x02036c64 (0x22)
// Fixed-point Q20.12 multiply of struct fields at +0x48 and +0x30 with
// rounding (+0x800 >> 12) via FUN_0200a380 (_ull_mul).
typedef long long s64;
typedef int s32;

extern s64 FUN_0200a380(s64 a, s64 b);

s32 FUN_02036c64(const s32 *p) {
    return (s32)((FUN_0200a380(p[0x12], p[0xc]) + 0x800) >> 12);
}
