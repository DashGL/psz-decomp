// FUN_02069dec @ 0x02069dec (0x6c, arm) - ported from FUN_02031014 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02069dec @ 0x02031014 (0x6c, ARM), verified dsi/1.1. */
typedef unsigned int u32;
extern int FUN_02069e84(u32);
extern int FUN_02069a60(int);
extern void FUN_02069fec(void);

void FUN_02069dec(u32 a0) {
    if (FUN_02069e84(a0)) {
        return;
    }
    while (FUN_02069a60(0)) {
    }
    if (FUN_02069e84(a0)) {
        return;
    }
    FUN_02069fec();
    if (FUN_02069e84(a0)) {
        return;
    }
    do {
        FUN_02069a60(1);
    } while (!FUN_02069e84(a0));
}
