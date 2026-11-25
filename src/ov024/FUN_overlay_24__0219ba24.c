//cpp
// flags: -O4,s
extern "C" {
extern int DAT_overlay_24__0219c85c[];
extern int FUN_02037208(void *, int);
int FUN_overlay_24__0219ba24(int *self, int *p) {
    if ((*p > DAT_overlay_24__0219c85c[0] ? 1 : 0) != 0) return 0;
    if (FUN_02037208((void *)self[1], 2) == 0) return 1;
    return 0;
}
}
