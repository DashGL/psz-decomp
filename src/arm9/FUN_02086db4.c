// flags: -O4,s
extern int DAT_020fa984;
extern void *DAT_0211a530;
extern const int DAT_020f44d0;
extern const char DAT_020f44d4[];
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020873a8(void *);
extern void FUN_02087604(int);
extern void FUN_020c47ec(int, int, const void *, int, int, void (*)(int));

void FUN_02086db4(void) {
    DAT_020fa984 = -1;
    if (!DAT_0211a530) {
        void *p = FUN_020ba894(0x1938);
        if (p) p = FUN_020873a8(p);
        DAT_0211a530 = p;
    }
    FUN_020c47ec(0x1e, 0x1001, DAT_020f44d4, DAT_020f44d0, 0x10000, FUN_02087604);
}
