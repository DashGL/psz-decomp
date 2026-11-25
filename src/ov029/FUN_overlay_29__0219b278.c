//cpp
// flags: -O4,s
extern "C" {
extern int DAT_overlay_29__0219bef0[];
extern int FUN_02037208(void *, int);
int FUN_overlay_29__0219b278(int *self, int *p) {
    if ((*p > DAT_overlay_29__0219bef0[3] ? 1 : 0) != 0) return 0;
    if (FUN_02037208((void *)self[1], 3) == 0) return 1;
    return 0;
}
}
