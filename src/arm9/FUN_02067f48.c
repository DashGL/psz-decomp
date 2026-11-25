// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02067ce0(int);
extern void FUN_02065e30(int);
extern struct { unsigned short f0; unsigned short f2; int f4; int f8; } D_021184e4;

void FUN_02067f48(void) {
    if (D_021184e4.f0 != 0) {
        return;
    }
    D_021184e4.f0 = 1;
    FUN_02067ce0(1);
    D_021184e4.f4 = 0;
    D_021184e4.f8 = 0;
    FUN_02065e30(0x10);
}
