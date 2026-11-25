// FUN_0200d524 @ 0x0200d524 (0x38, arm) - ported from FUN_02027b34 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200d524 @ 0x02027b34 (0x38, ARM), verified dsi/1.1. */
extern void FUN_0200e760(void);
extern void FUN_02069678(int, int, int, int);
extern int FUN_02069e58(void);
extern void FUN_02069c30(int);
extern void FUN_02069dec(int);

void FUN_0200d524(void) {
    FUN_0200e760();
    FUN_02069678(0, 0, 0, 0);
    int v = FUN_02069e58();
    FUN_02069c30(1);
    FUN_02069dec(v);
}
