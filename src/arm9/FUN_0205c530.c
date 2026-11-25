// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// flags: -noThumb -O4,p
// Fixedpoint reciprocal: hardware setup consumes denominator; result is consumed by bc648.
extern void FUN_0205c638(int);
extern int FUN_0205c600(void);
int FUN_0205c530(int denominator) { FUN_0205c638(denominator); return FUN_0205c600(); }
