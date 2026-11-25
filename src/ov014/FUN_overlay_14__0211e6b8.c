// flags: -O4,s
#pragma thumb off
extern void FUN_0200c394(void *, unsigned int, unsigned int, void (*)(void *), void (*)(void *));
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_020656b8(void *, unsigned int, unsigned int);
extern void FUN_020654b4(unsigned int, void *, unsigned int);
#pragma thumb on

extern void FUN_overlay_14__0211e68c(void *);
extern void FUN_overlay_14__0211e6b4(void *);
extern void FUN_overlay_14__0211e890(void *);
extern void FUN_overlay_14__0211fcc4(void *);
extern void *FUN_overlay_14__0211fd28(void *, int, int, void *);
extern void *FUN_020c2b50(void *);
extern void *FUN_020c3564(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_14__0211fb2c(void *);
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_overlay_14__0211fcd4(void *, int, int);
extern void FUN_overlay_14__0211fc80(void *, void *, int);
extern void FUN_overlay_14__0211f5b0(void *);
extern char DAT_overlay_14__021217a8[];
extern int DAT_overlay_14__02121a20[][3];

char *FUN_overlay_14__0211e6b8(char *self, unsigned int *config) {
    void *child;
    int i;
    int id;
    int wide;

    *(unsigned int *)self = config[0];
    *(unsigned int *)(self + 4) = config[1];
    *(unsigned int *)(self + 8) = 0;
    FUN_0200c394(self + 12, 2, 24, FUN_overlay_14__0211e68c, FUN_overlay_14__0211e6b4);
    FUN_overlay_14__0211e68c(self + 60);
    FUN_overlay_14__0211fd28(self + 84, 2, 1, DAT_overlay_14__021217a8);
    FUN_0200c394(self + 96, 2, 20, FUN_overlay_14__0211e890, FUN_overlay_14__0211fcc4);
    *(unsigned int *)(self + 136) = 0;
    *(unsigned int *)(self + 140) = 0;
    *(unsigned int *)(self + 144) = (unsigned int)DAT_overlay_14__02121a20[*(unsigned int *)self][0];
    *(unsigned int *)(self + 148) = 0;
    *(unsigned int *)(self + 152) = 0;
    *(unsigned int *)(self + 156) = 2;
    *(unsigned short *)(self + 160) = 0;
    *(unsigned short *)(self + 162) = 0;
    *(unsigned int *)(self + 164) = 0;
    *(unsigned int *)(self + 168) = 0;
    FUN_020c2b50(self + 172);
    FUN_020c3564(self + 176);
    FUN_0200c938(self + 236, 16);
    *(unsigned short *)(self + 252) = 0;
    *(unsigned short *)(self + 254) = 0;
    *(unsigned int *)(self + 256) = 0;
    child = FUN_020ba894(120);
    if (child) {
        child = FUN_overlay_14__0211fb2c(child);
    }
    *(void **)(self + 8) = child;
    wide = 0;
    if (*(unsigned int *)self <= 3 && ((1U << *(unsigned int *)self) & 11)) {
        wide = 1;
    }
    if (wide == 0) {
        *(unsigned int *)(self + 136) = 0;
        *(void **)(self + 140) = FUN_020ba8a0(*(unsigned int *)(self + 144) + 1);
        FUN_020656b8(*(void **)(self + 140), 0, *(unsigned int *)(self + 144) + 1);
    } else {
        *(unsigned int *)(self + 140) = 0;
        *(void **)(self + 136) = FUN_020ba8a0((*(unsigned int *)(self + 144) + 1) * 2);
        FUN_020654b4(0, *(void **)(self + 136), (*(unsigned int *)(self + 144) + 1) * 2);
    }
    FUN_overlay_14__0211fcd4(self + 96, 11, 5);
    FUN_overlay_14__0211fcd4(self + 116, 2, 1);
    *(unsigned int *)(self + 152) = 0;
    for (i = 0; i < 2; i++) {
        id = DAT_overlay_14__02121a20[*(unsigned int *)self][i + 1];
        FUN_overlay_14__0211fc80(*(void **)(self + 8), self + 12 + 24 * (unsigned int)i, id);
        if (id != -1 && id == *(int *)(self + 4)) {
            *(int *)(self + 152) = i;
        }
    }
    *(void **)(self + 60) = self + 84;
    FUN_overlay_14__0211f5b0(self);
    return self;
}
