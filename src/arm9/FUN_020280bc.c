// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020266fc(int a, int b, int c, unsigned short *d, unsigned int *e, int f);

int FUN_020280bc(int param_1, int param_2, int param_3, int param_4, void *param_5) {
    unsigned int spc;
    unsigned short sp8;
    int res = FUN_020266fc(param_1, param_2, param_3, &sp8, &spc, param_4);
    if (res < 0 || param_5 == 0) {
        return res;
    }
    *(unsigned short *)((char *)param_5 + 2) = ((sp8 >> 8) & 0xff) | ((sp8 << 8) & 0xff00);
    *(unsigned int *)((char *)param_5 + 4) = ((spc >> 24) & 0xff) | ((spc >> 8) & 0xff00) | ((spc << 8) & 0xff0000) | ((spc << 24) & 0xff000000);
    return res;
}
