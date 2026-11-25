// flags: -O4,p
extern void *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, const char *);
#pragma thumb off
extern void FUN_02000edc(const char *, const char *, const char *, int);
#pragma thumb reset
extern int FUN_020cfdbc(void *, void *);
extern void FUN_020ce7d0(void *, void *);
extern void FUN_020c7bec(void *);
extern const char DAT_020fe0bc[];
extern const char DAT_020fe49c[];
extern const char DAT_020fe178[];
extern const char DAT_020fe050[];

int FUN_020d157c(void **a0) {
    void *r6 = *a0;
    int r4 = 0;
    void **sp00;
    void *r5;
    int i;
    if (*(int *)((char *)r6 + 0x238) > 0) {
        sp00 = (void **)FUN_020c7bcc(*(int *)((char *)r6 + 0x238) * 4);
        if (sp00 == 0) {
            FUN_020d1b74(a0, DAT_020fe0bc);
            return 1;
        }
        for (r5 = *(void **)((char *)r6 + 0x5c4); r5 != 0; r5 = *(void **)((char *)r5 + 0x20)) {
            if (*(int *)r5 == 3 && *(int *)((char *)r5 + 0x14) != 5 && *(int *)(*(char **)((char *)r5 + 4) + 0x140) == 0) {
                if (r4 >= *(int *)((char *)r6 + 0x238)) {
                    FUN_02000edc(DAT_020fe49c, DAT_020fe178, DAT_020fe050, 0x617);
                }
                sp00[r4++] = r5; *(int *)(*(char **)((char *)r5 + 4) + 0x140) = 1;
            }
        }
        for (i = 0; i < r4; i++) {
            int r0 = FUN_020cfdbc(a0, sp00[i]);
            if (r0 != 0) {
                *(int *)((char *)sp00[i] + 0x1c) = r0;
            }
        }
        for (i = 0; i < r4; i++) {
            char *p = *(char **)((char *)sp00[i] + 4);
            *(int *)(p + 0x140) = 0;
            if (*(int *)(p + 0x144) != 0) {
                FUN_020ce7d0(a0, sp00[i]);
            }
        }
        FUN_020c7bec(sp00);
    }
    return 0;
}
