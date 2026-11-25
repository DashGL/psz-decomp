// flags: -O4,p
extern char *FUN_02086e3c(void);
extern int FUN_020849d4(void *);
extern int FUN_020b0450(void *, int, int);
extern char *FUN_020870c4(void *);
extern void FUN_020c193c(int, int, int, int, int);
typedef struct { int a; int b; int val; } Sub;
typedef struct { char pad[0x2c]; Sub sub; } Stats;
int FUN_overlay_12__02135c00(int *p) {
    char *player = FUN_02086e3c();
    int count = FUN_020849d4(p + 5);
    Sub *sub;
    if (!FUN_020b0450(player + 16, p[9], count)) return 0;
    sub = &((Stats *)FUN_020870c4(FUN_02086e3c()))->sub;
    sub->val += p[10];
    FUN_020c193c(5, 3, 0, 0, -1);
    return 1;
}
