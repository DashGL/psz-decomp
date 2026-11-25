// flags: -O4,p
unsigned int FUN_overlay_12__0212058c(unsigned int *p, int mode) {
    if (mode == 3) return *(unsigned int *)((char *)p + p[757] * 12 + 52);
    if (mode == 2) return ((unsigned int *)((char *)p + p[757] * 8))[110];
    return ~0U;
}
