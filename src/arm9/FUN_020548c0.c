// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int);
extern void FUN_020673d4(void *, int);
extern void FUN_020673f0(void *, unsigned int);
extern void FUN_02052de4(int, int);
extern void FUN_02065774(void *, void *, int);
extern int FUN_02052e54(int, int, int, int, void *, unsigned int);

int FUN_020548c0(int a0, void *a1, void *a2, unsigned int a3) {
    int sp08[2];
    void *r8 = FUN_02052f70();
    int r0 = FUN_02052fe4(1, 0xb);
    if (r0 != 0) {
        return r0;
    }
    FUN_020673d4((char *)*((void **)r8 + 1) + 0x10, 4);
    if (*(int *)((char *)*((void **)r8 + 1) + 0x10) == 0) {
        return 3;
    }
    if (a3 > 0x5e4) {
        return 6;
    }
    FUN_020673f0(a2, a3);
    FUN_02052de4(0x12, a0);
    FUN_02065774(a1, sp08, 6);
    r0 = FUN_02052e54(0x12, 4, sp08[0], sp08[1], a2, a3);
    if (r0 == 0) {
        r0 = 2;
    }
    return r0;
}
