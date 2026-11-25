// FUN_02015bc0 @ 0x02015bc0 (0x5c, arm) - ported from FUN_0201b46c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02015bc0 @ 0x0201b46c (0x5c, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern void FUN_02015630(u32, u32, u32, u32);
extern void FUN_020156a4(u32, u32, u32);
extern void FUN_02015768(u32, u32);

void FUN_02015bc0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    if (a3 != 0 && a1 != 0) {
        FUN_02015630(a0, a3, a1, a5);
    }
    if (a2 != 0) {
        FUN_020156a4(a0, a2, a4);
    }
    if (a1 != 0) {
        FUN_02015768(a0, a1);
    }
}
