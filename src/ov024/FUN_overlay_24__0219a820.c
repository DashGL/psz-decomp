//cpp
// flags: -O4,s
extern "C" {
extern int DAT_overlay_24__0219c5e8[];
extern int FUN_02037578(void *);
extern int FUN_02037208(void *, int);
int FUN_overlay_24__0219a820(int *self, int *p) {
    if ((FUN_02037578((void *)self[1]) != 0 ? 1 : 0) == 0) return 0;
    int v = *p;
    if ((v > DAT_overlay_24__0219c5e8[3] ? 1 : 0) != 0) return 0;
    if ((v < DAT_overlay_24__0219c5e8[4] ? 1 : 0) != 0) return 0;
    if (FUN_02037208((void *)self[1], 5) == 0) return 1;
    return 0;
}
}
