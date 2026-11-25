// flags: -O4,s
void FUN_overlay_12__0212d42c(unsigned int *p, int index) {
    if (index >= 0 && index < 10) {
        p[index] &= 0x80000000;
        p[index] &= 0x7fffffff;
        ((unsigned short *)(p + 10))[index] = 0;
    }
}
