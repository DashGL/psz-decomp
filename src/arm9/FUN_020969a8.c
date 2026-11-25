// flags: -O4,s
extern void *DAT_02108c64;
extern int FUN_0206d1fc(void *);
extern int FUN_0206d36c(void *, int);
extern int FUN_02096424(int);
extern void FUN_02032dfc(void *, void *);
extern void FUN_02098030(void *, int);

int FUN_020969a8(char *s, int index) {
    int world[5];
    if (index >= 0 && index < 7 && *(void **)(s + 0x20) != 0) {
        int *p;
        FUN_02032dfc(world, DAT_02108c64);
        p = world;
        if (FUN_0206d1fc(p) && !FUN_0206d36c(p, 0)) {
            FUN_02098030(*(void **)(s + 0x20), FUN_02096424(index));
            return 1;
        }
    }
    return 0;
}
