// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02021490(void *, int);
extern int FUN_020229a0(unsigned int, unsigned int);
extern void FUN_020228a0(void *, void *, int);
extern void FUN_020227bc(void *, void *, int);

void FUN_020229c0(void *a0, unsigned char *a1, int a2) {
    if (FUN_02021490(a1, a2) != 0xffff) {
        return;
    }
    {
        unsigned short s12 = *(unsigned short *)((char *)a0 + 0x12);
        unsigned short s10 = *(unsigned short *)((char *)a0 + 0x10);
        unsigned short s0e = *(unsigned short *)((char *)a0 + 0xe);
        unsigned short s0c = *(unsigned short *)((char *)a0 + 0xc);
        unsigned short u10 = (unsigned short)((s10 >> 8) | (s10 << 8));
        unsigned short u0c = (unsigned short)((s0c >> 8) | (s0c << 8));
        unsigned short u0e = (unsigned short)((s0e >> 8) | (s0e << 8));
        unsigned short u12 = (unsigned short)((s12 >> 8) | (s12 << 8));
        if (FUN_020229a0((u0c << 16) | u0e, (u10 << 16) | u12) == 0) {
            return;
        }
    }
    switch (a1[0]) {
    case 0:
        FUN_020228a0(a0, a1, a2);
        break;
    case 8:
        FUN_020227bc(a0, a1, a2);
        break;
    }
}
