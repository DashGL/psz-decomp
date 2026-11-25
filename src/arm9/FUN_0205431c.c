// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int, int, int, int, int);
extern void FUN_020673d4(void *, int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int, int);

int FUN_0205431c(int a0, unsigned int a1) {
    void *r6 = FUN_02052f70();
    int r0 = FUN_02052fe4(5, 7, 9, 8, 10, 11);
    unsigned short *r1;
    unsigned short state;
    if (r0 != 0) {
        return r0;
    }
    r1 = *(unsigned short **)((char *)r6 + 4);
    state = *r1;
    if (state == 7 || state == 9) {
        if (a1 < 1 || a1 > 15) {
            return 6;
        }
        FUN_020673d4((char *)r1 + 0x182, 2);
        if ((*(unsigned short *)(*(char **)((char *)r6 + 4) + 0x182) & (1 << a1)) == 0) {
            return 7;
        }
    } else {
        if (a1 != 0) {
            return 6;
        }
    }
    FUN_02052de4(0xd, a0);
    r0 = FUN_02052e54(0xd, 1, 1 << a1);
    return r0 == 0 ? 2 : r0;
}
