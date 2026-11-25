// FUN_02003728 @ 0x02003728 (0x44, arm) - ported from FUN_02039260 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02003728 @ 0x02039260 (0x44, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern void FUN_020014d4(int, int, u32);

int FUN_02003728(int *a0, int a1, u32 a2) {
    u32 pos = a0[2];
    if (pos + a2 > (u32)a0[1]) {
        a2 = a0[1] - pos;
    }
    FUN_020014d4(a0[0] + pos, a1, a2);
    a0[2] += a2;
    return 1;
}
