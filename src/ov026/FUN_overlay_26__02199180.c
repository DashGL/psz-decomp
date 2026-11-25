//cpp
// flags: -O4,s
extern "C" {
extern int DAT_overlay_26__0219b49c[];
extern int FUN_02037208(void *, int);
int FUN_overlay_26__02199180(int *self, int *p) {
    if ((*p > DAT_overlay_26__0219b49c[0] ? 1 : 0) != 0) return 0;
    if (FUN_02037208((void *)self[1], 3) == 0) return 1;
    return 0;
}
}
