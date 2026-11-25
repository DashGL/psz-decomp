// flags: -O4,s
extern void *FUN_overlay_11__0211ec64(void);
extern int FUN_overlay_11__0211f268(void *);
extern void FUN_020c193c(int, int, int, int, int);
int FUN_overlay_11__02123360(int *self) {
    if (!self[1]) {
        self[2] = 1;
        if (FUN_overlay_11__0211f268(FUN_overlay_11__0211ec64())) return 1;
        FUN_020c193c(0, 5, 0, 0, -1);
        return 0;
    }
    return 0;
}
