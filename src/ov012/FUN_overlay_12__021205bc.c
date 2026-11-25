// flags: -O4,p
unsigned int FUN_overlay_12__021205bc(unsigned int *p, int mode) {
    if (mode == 3) return *(unsigned int *)((char *)p + p[757] * 12 + 60);
    if (mode == 2) return ((unsigned int *)((char *)p + p[757] * 8))[111];
    return ~0U;
}
