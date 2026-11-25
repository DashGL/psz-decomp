// flags: -O4,s
extern signed char UNK_0211a3c4[];
extern void *UNK_02108c64;
extern int FUN_0207725c(void *), FUN_020772b0(void *, int *), FUN_02078b6c(int), FUN_02032e14(void *), FUN_02030700(void *);
int FUN_02077144(char *s, int flag) {
    int mode, value;
    if (!flag) {
        mode = FUN_0207725c(s);
        if (mode == 0) {
            value = 0;
            if (FUN_020772b0(s, &value) && value == UNK_0211a3c4[13] && FUN_02078b6c(0)) return 1;
            return 0;
        }
        if ((unsigned int)(mode - 2) <= 1 && !FUN_02032e14(UNK_02108c64)) return 0;
        if (!*(void **)(s + 72)) return 1;
        return FUN_02030700(*(void **)(s + 72)) ? 1 : 0;
    }
    return 0;
}
