// flags: -O4,s
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int, int, int, int, int);
int FUN_overlay_12__02125fd8(int *p) {
    int index;
    p[24] |= 4;
    if (FUN_020bbf6c(1)) {
        FUN_020c193c(0, 0, 0, 0, -1);
        index = p[22];
        if (index >= 0 && index < p[16]) return index;
        return -1;
    }
    return -1;
}
