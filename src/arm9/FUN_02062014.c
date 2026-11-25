// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_020654b4(int, void *, int);
extern int FUN_02062104(int, void *, int);
extern void FUN_0206557c(int, void *, int);
extern void FUN_020654dc(const void *, void *, int);
extern int FUN_02062214(int);

void FUN_02062014(unsigned char *arg0, int *arg1, const void *arg2) {
    FUN_020654b4(0, arg0, 0x4c0);
    arg0[0x4b2] = 0;
    if ((FUN_02062104(arg1[3], arg0, 1) == 0) | (FUN_02062104(arg1[4], arg0, 0) == 0)) {
        arg0[0x4b2] = 1;
        FUN_0206557c(0, arg0, 0x220);
    }
    *(int *)(arg0 + 0x4b8) = arg1[5];
    if (arg2 != 0) {
        FUN_020654dc(arg2, arg0 + 0x220, 0x16);
    }
    arg0[0x236] = *((unsigned char *)arg1 + 0x18);
    FUN_020654dc((const void *)arg1[1], arg0 + 0x238, (unsigned short)(FUN_02062214(arg1[1]) << 1));
    FUN_020654dc((const void *)arg1[2], arg0 + 0x298, 0xc0);
    arg0[0x358] = 1;
    *(unsigned short *)(arg0 + 0x35a) = 1;
    *(unsigned short *)(arg0 + 0x4b0) = 1;
}
