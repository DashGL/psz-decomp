// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052f80(void);
extern void FUN_020673d4(void *, int);

void *FUN_0205375c(unsigned short *a0, unsigned int a1) {
    void *r6 = FUN_02052f70();
    unsigned short *sp00[15];
    int i;
    if (FUN_02052f80() != 0) {
        return 0;
    }
    if (a1 < 1 || a1 > 15) {
        return 0;
    }
    FUN_020673d4(*(char **)((char *)r6 + 4) + 0x182, 2);
    if ((*(unsigned short *)(*(char **)((char *)r6 + 4) + 0x182) & (1 << a1)) == 0) {
        return 0;
    }
    if (*(volatile unsigned short *)(a0 + 2) == 0) {
        return 0;
    }
    sp00[0] = a0 + 5;
    i = 0;
    do {
        if (sp00[i][2] == a1) {
            return sp00[i];
        }
        i++;
        sp00[i] = (unsigned short *)((int)a0[3] + (int)sp00[i - 1]);
    } while (i < *(volatile unsigned short *)(a0 + 2));
    return 0;
}
