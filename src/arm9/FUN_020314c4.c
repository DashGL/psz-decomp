// flags: -O4,s
extern void *DAT_02101dd4;
extern char *DAT_02108c84;
extern int FUN_020c4848(void);
extern int FUN_020872c4(void *);
extern int FUN_020ba0bc(void);
extern int FUN_020ba234(void);
extern void *FUN_02086e3c(void);
extern void FUN_020874b8(void *);
extern void FUN_020ba258(void);
extern void FUN_020b9f68(void *);
extern void FUN_02050db4(void);
extern void FUN_0203196c(void *);
extern void FUN_02031704(void *);
extern void FUN_020315c8(void *);

void FUN_020314c4(char *s) {
    char *manager;
    void *p;
    for (;;) {
        if (FUN_020c4848() == 1) {
            if (!FUN_020872c4(FUN_02086e3c())) break;
        }
        FUN_020874b8(FUN_02086e3c());
    }
    while (FUN_020ba0bc(), FUN_020ba234()) {
        FUN_020ba258();
    }
    FUN_020ba258();
    p = DAT_02101dd4;
    if (p) FUN_020b9f68(p);
    FUN_02050db4();
    if (*(unsigned int *)(s + 8)) {
        FUN_0203196c(s);
        if (*(void **)(s + 16)) FUN_02031704(s);
        if (*(void **)(s + 12)) FUN_020315c8(s);
        *(unsigned int *)(s + 8) = 0;
    }
    p = DAT_02101dd4;
    if (p) FUN_020b9f68(p);
    manager = DAT_02108c84;
    if (manager) {
        p = *(void **)(manager + 88);
        if (p) ((void (*)(void *))(*(void ***)p)[25])(p);
    }
}
