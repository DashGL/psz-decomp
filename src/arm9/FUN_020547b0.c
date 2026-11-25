// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int, int);
extern void FUN_020673d4(void *, int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int);
int FUN_020547b0(int a) {
    int *r4 = (int *)FUN_02052f70();
    int res = FUN_02052fe4(2, 9, 10);
    if (res != 0) {
        return res;
    }
    FUN_020673d4((char *)r4[1] + 0xc, 4);
    if (*(int *)((char *)r4[1] + 0xc) == 0) {
        return 3;
    }
    FUN_02052de4(0x10, a);
    res = FUN_02052e54(0x10, 0);
    if (res == 0) {
        return 2;
    }
    return res;
}
