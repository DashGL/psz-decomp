// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
extern void *FUN_020b9cb0(void *, void *);
extern void FUN_02074aec(void *, const void *);
extern void *FUN_020ba8bc(int, int);
extern int FUN_02086e3c(void);
extern int FUN_020870c4(int);
extern void FUN_020c0ca8(void *);
extern int FUN_020c0788(void);
extern void FUN_020b3bd8(void *, int, int, void *);
extern void *FUN_020ba894(int);
extern void *FUN_020bab7c(void *, void *, int, int);
extern void FUN_02073c14(void);
extern void FUN_02073678(void);
extern int DAT_020f9b3c;
extern int DAT_020f9b18;
extern int DAT_020fc910;

void *FUN_02074a48(void *param_1, void *parent) {
    char local_18[12];
    void *p;
    FUN_020b9cb0(param_1, parent);
    *(void **)param_1 = &DAT_020f9b3c;
    *(int *)((char *)param_1 + 0x20) = 0;
    *(unsigned char *)((char *)param_1 + 0x28) = 0;
    *(unsigned char *)((char *)param_1 + 0x29) = 0;
    *(int *)((char *)param_1 + 0x2c) = -1;
    *(int *)((char *)param_1 + 0xc) = DAT_020f9b18;
    FUN_02074aec((char *)param_1 + 0x30, &DAT_020fc910);
    *(void **)((char *)param_1 + 0x70) = FUN_020ba8bc(0x50, 0x20);
    if (*(void **)((char *)param_1 + 0x70) != 0) {
        int x = FUN_020870c4(FUN_02086e3c());
        FUN_020c0ca8(local_18);
        FUN_020b3bd8(*(void **)((char *)param_1 + 0x70), FUN_020c0788(), x, local_18);
        *(void **)((char *)param_1 + 0x30) = *(void **)((char *)param_1 + 0x70);
        *(unsigned short *)((char *)param_1 + 0x34) = 0x50;
    }
    p = FUN_020ba894(0x5c);
    if (p != 0) {
        p = FUN_020bab7c(p, (char *)param_1 + 0x30, 0x1000, 0x800);
    }
    *(void **)((char *)param_1 + 0x24) = p;
    if (p != 0) {
        *(void (**)(void))((char *)p + 8) = FUN_02073c14;
    }
    FUN_02073678();
    return param_1;
}
