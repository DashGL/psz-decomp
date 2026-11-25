// FUN_0200f5b8 @ 0x0200f5b8 (0x60, arm) - ported from FUN_02029c48 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f5b8 @ 0x02029c48 (0x60, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern u32 *FUN_0200ebec(u32);
extern int FUN_0200f8f0(u32, u32, u32);
extern int FUN_0200efe0(u32);

int FUN_0200f5b8(u32 a0, u32 flags, u32 a2, u32 a3, int *out) {
    u32 *p = FUN_0200ebec(a0);
    if (p == 0) {
        return 3;
    }
    int val;
    if (flags & 8) {
        val = FUN_0200f8f0(*p, a2, a3);
        if (val == 0) {
            return 7;
        }
    } else {
        val = FUN_0200efe0(*p);
    }
    if (out != 0) {
        *out = val;
    }
    return 0;
}
