// flags: -O4,s
extern void *FUN_020ba894(unsigned int);
extern struct {
    int f0;
    int f4;
    void *obj;
} DAT_0211a534;
extern int DAT_0211a540[4];
extern unsigned int DAT_020fa994;
void FUN_02087658(void) {
    int i;
    if (!DAT_0211a534.obj) {
        unsigned int *p = (unsigned int *)FUN_020ba894(4);
        if (p) *p = (unsigned int)&DAT_020fa994;
        DAT_0211a534.obj = p;
    }
    for (i = 0; i < 4; i++) {
        DAT_0211a540[i] = 0;
    }
    DAT_0211a534.f0 = 0;
}
