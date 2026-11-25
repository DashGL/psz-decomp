// FUN_0200f758 @ 0x0200f758 (0x8c, arm) - ported from FUN_02029de8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef struct {
    u32 val : 24;
    u32 flag : 8;
} Entry29de8;
extern Entry29de8 *FUN_0200ecb4(u32);
extern int FUN_0200fa34(u32, u32, u32);
extern int FUN_0200f9c8(u32, u32, u32);
extern int FUN_0200efe0(u32);

int FUN_0200f758(u32 a0, u32 flags, u32 a2, u32 a3, int *out) {
    Entry29de8 *p = FUN_0200ecb4(a0);
    if (p == 0) {
        return 5;
    }
    int val;
    if (flags & 4) {
        if (p->flag & 1) {
            val = FUN_0200fa34(p->val, a2, a3);
        } else {
            val = FUN_0200f9c8(p->val, a2, a3);
        }
        if (val == 0) {
            return 9;
        }
    } else {
        val = FUN_0200efe0(p->val);
    }
    if (out != 0) {
        *out = val;
    }
    return 0;
}
