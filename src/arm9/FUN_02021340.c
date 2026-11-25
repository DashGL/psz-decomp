// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020212e0(void);
extern void FUN_02066998(void *);
extern void FUN_02066904(void *);
extern void FUN_02020f6c(int);
extern int D_021071fc;
extern int D_021072bc;
extern struct { char pad[0x54]; int f54; int f58; int f5c; } D_02107054;

void FUN_02021340(void) {
    FUN_020212e0();
    FUN_02066998(&D_021071fc);
    FUN_02066904(&D_021072bc);
    D_02107054.f54 = 0;
    FUN_02020f6c(0);
    D_02107054.f58 = 0;
    D_02107054.f5c = 0;
}
