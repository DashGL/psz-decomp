// FUN_020534c4 @ 0x020534c4 (0x44, arm) - ported from FUN_02035528 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020534c4 @ 0x02035528 (0x44, ARM), verified dsi/1.1. */
extern int FUN_020683d4(void);
extern int FUN_02052f80(void);
extern int FUN_02052f70(void);
extern void FUN_020683e8(int);

int FUN_020534c4(int a0) {
    int s = FUN_020683d4();
    int r = FUN_02052f80();
    if (r != 0) {
        FUN_020683e8(s);
        return r;
    }
    *(int *)(FUN_02052f70() + 0xc8) = a0;
    FUN_020683e8(s);
    return 0;
}
