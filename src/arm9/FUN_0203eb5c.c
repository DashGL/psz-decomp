// flags: -O4,s
extern void *DAT_02108c64;
extern void *DAT_020f7230[];
extern void *DAT_02108d0c[];
extern void *DAT_020f7208[];
extern void *DAT_020f7200[];
extern void FUN_02032dfc(void *, void *), FUN_0203eee4(void *, int), FUN_020bc3c0(void *, void *, void *), FUN_0203ed5c(void *, int);
extern int FUN_0206d36c(void *, void *), FUN_020bc548(void *, void *);
extern void *FUN_020ba894(unsigned int), *FUN_020bc2dc(void *, void *, int), *FUN_0203ee1c(void *, void *, int);

void FUN_0203eb5c(char *s, signed char *key, int slot, int index) {
    unsigned int desc[5];
    void *p, *path;
    if (slot < 0 || slot >= 4 || index < 0 || index >= 56) return;
    FUN_02032dfc(desc, DAT_02108c64);
    if (FUN_0206d36c(desc, 0) && index < 54) index = key[33] == 0 ? 54 : 55;
    FUN_0203eee4(s, slot);
    p = FUN_020ba894(132);
    if (p) p = FUN_020bc2dc(p, DAT_020f7230[slot], 0);
    ((void **)(s + 1084))[slot] = p;
    if (index < 54) {
        path = FUN_0203ee1c(s, key, index);
        if (FUN_020bc548(((void **)(s + 1084))[slot], path) <= 0x19000)
            FUN_020bc3c0(((void **)(s + 1084))[slot], path, DAT_02108d0c[slot]);
    } else {
        int idx = index - 54;
        if (key[34] == 2 && key[32] == 0)
            FUN_020bc3c0(((void **)(s + 1084))[slot], DAT_020f7208[idx], DAT_02108d0c[slot]);
        else
            FUN_020bc3c0(((void **)(s + 1084))[slot], DAT_020f7200[idx], DAT_02108d0c[slot]);
    }
    FUN_0203ed5c(s, slot);
}
