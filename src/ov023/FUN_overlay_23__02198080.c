//cpp
// flags: -O4,s
extern "C" int FUN_02072a70(void *, int);
extern char *DAT_0210e24c;
extern "C" void FUN_overlay_23__02198080(unsigned int *p, unsigned int *out) {
    char *col = DAT_0210e24c + 116;
    out[0] = ((unsigned int *)p[4])[13];
    out[1] = (FUN_02072a70(col, 3) > 0) ? 1 : 0;
}
