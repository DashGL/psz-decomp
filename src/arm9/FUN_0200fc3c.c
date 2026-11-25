// FUN_0200fc3c @ 0x0200fc3c (0x48, arm) - ported from FUN_0202a2cc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fc3c @ 0x0202a2cc (0x48, ARM), verified dsi/1.1. */
extern int FUN_0206a6dc(int, int);
extern void FUN_0206a6a8(int, int, int);
extern void FUN_02069830(int, int);

void FUN_0200fc3c(int a0, int a1, int a2, int a3) {
    if (a0 == FUN_0206a6dc(a2, a3)) {
        FUN_0206a6a8(a2, a3, 0);
    }
    FUN_02069830(a0, a0 + a1);
}
