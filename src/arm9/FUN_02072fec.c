// flags: -O4,s
extern char DAT_0211a210[];
extern int DAT_02101dd4;
extern void *FUN_020ba918(unsigned int);
extern void *FUN_02073d0c(void *, int);
extern void *FUN_02074a48(void *, int);
extern void *FUN_02073de4(void *, int);

int FUN_02072fec(int mode) {
    void *p;
    *(int *)(DAT_0211a210 + 8) = 0;
    *(int *)(DAT_0211a210 + 12) = 0;
    switch (mode) {
    case 1:
        p = FUN_020ba918(36);
        if (p) p = FUN_02073d0c(p, DAT_02101dd4);
        *(void **)(DAT_0211a210 + 32) = p;
        break;
    case 2:
        p = FUN_020ba918(116);
        if (p) p = FUN_02074a48(p, DAT_02101dd4);
        *(void **)(DAT_0211a210 + 36) = p;
        break;
    case 3:
        p = FUN_020ba918(372);
        if (p) p = FUN_02073de4(p, DAT_02101dd4);
        *(void **)(DAT_0211a210 + 40) = p;
        break;
    default:
        return 0;
    }
    DAT_0211a210[4] = mode;
    return 1;
}
