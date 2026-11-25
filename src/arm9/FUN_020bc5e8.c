// FUN_020bc5e8 @ 0x020bc5e8 (0x28)
// In-place fixed-point Q20.12 multiply (*a = (*a * *b + 0x800) >> 12),
// returning a.
typedef long long s64;
typedef int s32;

extern s64 FUN_0200a380(s64 a, s64 b);

s32 *FUN_020bc5e8(s32 *a, const s32 *b) {
    *a = (s32)((FUN_0200a380(*a, *b) + 0x800) >> 12);
    return a;
}
