// flags: -O4,s
typedef struct { unsigned char b[2]; } Pair2;
extern const Pair2 DAT_0213a318;
extern char *DAT_0213e860;
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_overlay_15__02127e24(int *, int *), FUN_overlay_15__02131a9c(void *);
extern int FUN_overlay_15__02137084(const void *, int);
extern void FUN_overlay_15__0212b934(void), FUN_overlay_15__021255f8(unsigned int);
extern int FUN_overlay_15__02125214(int, int, int);
extern void FUN_overlay_15__02125320(int);
extern void *FUN_overlay_15__02135f98(int, int), *FUN_overlay_15__02135af8(int, int);
extern void FUN_overlay_15__0212bda0(void), FUN_overlay_15__0212bd0c(void), FUN_overlay_15__0212b9b4(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
void FUN_overlay_15__0212b864(void) {
    int mode, kind;
    Pair2 messages = DAT_0213a318;
    DAT_0213e860 = FUN_overlay_15__021366c4(44, 4);
    FUN_overlay_15__02127e24(&mode, &kind);
    if (mode == 0) {
        FUN_overlay_15__02131a9c(DAT_0213e860 + 8);
        DAT_0213e860[0x29] = FUN_overlay_15__02137084(DAT_0213e860 + 8, 32);
    }
    FUN_overlay_15__0212b934();
    FUN_overlay_15__021255f8(mode + 9);
    if (kind == 1) FUN_overlay_15__02125214(53, -1, 0);
    else FUN_overlay_15__02125214(messages.b[mode], -1, 0);
    FUN_overlay_15__02125320(2);
    *(void **)DAT_0213e860 = FUN_overlay_15__02135f98(0, 0);
    *(void **)(DAT_0213e860 + 4) = FUN_overlay_15__02135af8(0, 62);
    *(unsigned short *)(*(char **)(DAT_0213e860 + 4) + 4) = (*(unsigned short *)(*(char **)(DAT_0213e860 + 4) + 4) & ~0x0c00) | 0xc00;
    FUN_overlay_15__0212bda0();
    FUN_overlay_15__0212bd0c();
    FUN_overlay_15__02127de4(FUN_overlay_15__0212b9b4);
}
