// flags: -O4,s
extern void FUN_02038000(void *, int, int, int);
extern unsigned short FUN_0205c9e4(int, int);
extern void FUN_02038084(void *, unsigned short);
void FUN_overlay_14__021201f8(unsigned char *p, int index) {
    if (index < 0 || index >= 3) return;
    if (((unsigned char **)(p + 64))[index]) {
        int delta = 4096 - *(int *)(((unsigned char **)(p + 64))[index] + 220);
        int y = (int)(((long long)delta * 1638 + 2048) >> 12) - 410;
        FUN_02038000(((unsigned char **)(p + 64))[index], 3277, y, 0);
        FUN_02038084(((unsigned char **)(p + 64))[index], (unsigned short)-FUN_0205c9e4(3277, 12288));
    }
}
