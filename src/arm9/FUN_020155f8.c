// FUN_020155f8 @ 0x020155f8 (0x38, arm) - ported from FUN_0201ae88 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020155f8 @ 0x0201ae88 (0x38, ARM), verified dsi/1.1. */
extern int FUN_02015380(int);
extern void FUN_02015140(int, int, int);
extern void FUN_02015270(int, int, int);

void FUN_020155f8(int a0, int a1, int a2, int a3) {
    if (a1 != 0) {
        int v = FUN_02015380(a0);
        FUN_02015140(v, a2, a3);
    } else {
        FUN_02015270(a0, a2, a3);
    }
}
