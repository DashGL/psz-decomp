// flags: -O2,s -noThumb
extern unsigned int FUN_02010234(unsigned int);
extern unsigned int FUN_02011974(void *, unsigned int);
extern unsigned int FUN_020119b8(void *, void *);
extern unsigned int FUN_02067184(void *);
extern unsigned int FUN_02059cd4(void *);
extern unsigned int FUN_0200e00c(void *);
extern unsigned int FUN_020109dc(void *, unsigned int);

extern unsigned int DAT_021028b4[];
extern char DAT_021028c0[];
extern char DAT_021028e4[];
extern char DAT_021028cc[];
extern char DAT_02102a80[];
extern char DAT_0210316c[];
extern char DAT_02102c80[];

unsigned int FUN_02010130(unsigned int priority, unsigned int archive) {
    int i, j;
    char *self;
    if (DAT_021028b4[0]) {
        return FUN_02010234(archive);
    }
    DAT_021028b4[0] = 1;
    FUN_02011974(DAT_021028c0, 0);
    for (i = 0; i < 8; i++) {
        FUN_020119b8(DAT_021028c0, DAT_021028e4 + i * 48);
    }
    FUN_02067184(DAT_021028cc);
    DAT_021028b4[2] = (unsigned int)DAT_02102a80;
    for (j = 0; j < 4; j++) {
        self = DAT_0210316c + j * 372;
        *(unsigned int *)(self + 272) &= ~1u;
        FUN_02059cd4(self + 92);
        FUN_0200e00c(self);
        *(int *)(self + 328) = j;
        *(unsigned char *)(self + 292) = 0;
        *(unsigned int *)(self + 300) = 0;
        *(unsigned int *)(self + 304) = 0;
        *(unsigned int *)(self + 288) = 0;
    }
    FUN_02010234(archive);
    return FUN_020109dc(DAT_02102c80, priority);
}
