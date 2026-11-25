// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// flags: -noThumb -O4,p
// Signed fixedpoint quotient: hardware setup consumes both incoming words; result is consumed by callers.
extern void FUN_0205c6d8(int, int);
extern int FUN_0205c600(void);
int FUN_0205c520(int numerator, int denominator) { FUN_0205c6d8(numerator, denominator); return FUN_0205c600(); }
