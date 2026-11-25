// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S23 {
    int f0;
    char *f4;
};
extern struct S23 *FUN_02052f70(void);
extern int FUN_02052fe4(int, int);
extern void FUN_020673d4(void *, int);
extern void FUN_020673f0(void *, int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int, void *, unsigned int);

int FUN_02054820(int param_1, void *param_2, unsigned int param_3) {
    struct S23 *s = FUN_02052f70();
    int r = FUN_02052fe4(1, 8);
    if (r != 0) {
        return r;
    }
    FUN_020673d4(s->f4 + 0x10, 4);
    if (*(int *)(s->f4 + 0x10) == 1) {
        return 3;
    }
    if (param_3 < 0x10) {
        return 6;
    }
    if (param_2 == 0) {
        return 6;
    }
    FUN_020673f0(param_2, param_3);
    FUN_02052de4(0x11, param_1);
    r = FUN_02052e54(0x11, 2, param_2, param_3);
    if (r == 0) {
        return 2;
    }
    return r;
}
