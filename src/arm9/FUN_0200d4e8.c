// FUN_0200d4e8 @ 0x0200d4e8 (0x30, arm) - ported from FUN_02027aa4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200d4e8 @ 0x02027aa4 (0x30, ARM), verified 2.0/base. */
extern int FUN_02069a60(int);
extern void FUN_0200da2c(void);
extern void FUN_0200e5f8(void);
extern void FUN_020103f4(void);
extern void FUN_02069c30(int);

void FUN_0200d4e8(void) {
    while (FUN_02069a60(0) != 0) {
    }
    FUN_0200da2c();
    FUN_0200e5f8();
    FUN_020103f4();
    FUN_02069c30(0);
}
