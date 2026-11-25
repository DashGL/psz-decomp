// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int, int);
extern void FUN_020673d4(void *, int);
extern void FUN_020673f0(void *, unsigned int);
extern int FUN_02052e54(int, int, void *, unsigned int, unsigned short, unsigned short, unsigned short, int, int);

int FUN_02054680(int a0, int a1, void *a2, unsigned int a3, unsigned short a4, unsigned short a5, unsigned short a6) {
    int r4 = 1;
    char *r5 = *(char **)((char *)FUN_02052f70() + 4);
    int res = FUN_02052fe4(2, 9, 10);
    if (res != 0) {
        return res;
    }
    FUN_020673d4(r5 + 0x188, 2);
    if (*(unsigned short *)(r5 + 0x188) == 0) {
        FUN_020673d4(r5 + 0x182, 2);
        r4 = *(unsigned short *)(r5 + 0x182);
        FUN_020673d4(r5 + 0x86, 2);
    }
    if (a2 == 0) {
        return 6;
    }
    if (r4 == 0) {
        return 7;
    }
    FUN_020673d4(r5 + 0x7c, 2);
    if (a2 == *(void **)(r5 + 0x7c)) {
        return 6;
    }
    if (a3 > 0x200) {
        return 6;
    }
    if (a3 == 0) {
        return 6;
    }
    FUN_020673f0(a2, a3);
    res = FUN_02052e54(0xf, 7, a2, a3, a4, a5, a6, a0, a1);
    if (res == 0) {
        res = 2;
    }
    return res;
}
