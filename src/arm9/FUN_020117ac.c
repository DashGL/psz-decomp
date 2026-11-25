// FUN_020117ac @ 0x020117ac (0x38, arm) - ported from FUN_0202be74 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020117ac @ 0x0202be74 (0x38, ARM), verified dsi/1.1. */
extern void FUN_0205a160(int, int, int);
extern void FUN_0205a150(int, int, int);

void FUN_020117ac(int a0, int a1, int a2, int a3) {
    FUN_0205a160(a0 + 0x5c, *(int *)(a0 + 0xa4) + a3, 0);
    FUN_0205a150(a0 + 0x5c, a1, a2);
}
