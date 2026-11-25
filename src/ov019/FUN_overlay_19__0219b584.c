// flags: -O4,s
extern int FUN_02037208(void *, int);
int FUN_overlay_19__0219b584(unsigned int *p) {
    if (((signed char *)p)[100] == 12) return 0;
    if ((p[34] & 2) == 0) return 0;
    if (FUN_02037208((void *)p[1], 4) == 0) return 1;
    return 0;
}
