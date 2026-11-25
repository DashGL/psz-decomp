// flags: -O4,s
extern char DAT_0211a51c[];
extern void *DAT_02108c64;
extern int FUN_02084be8(void *);
extern int FUN_0206d1fc(void *);
extern int FUN_0206d36c(void *, int);
extern void FUN_02032dfc(void *, void *);
extern void FUN_02097de8(void *);
void FUN_02096754(char *s) {
    int world[5];
    if (FUN_02084be8(DAT_0211a51c) && *(int *)s && *(void **)(s + 32)) {
        int *w;
        FUN_02032dfc(world, DAT_02108c64);
        w = world;
        if (FUN_0206d1fc(w) && !FUN_0206d36c(w, 0))
            FUN_02097de8(*(void **)(s + 32));
    }
}
