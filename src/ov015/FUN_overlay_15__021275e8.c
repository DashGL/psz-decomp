// flags: -O4,s
extern void FUN_overlay_15__0213590c(void *, int, int, int);
extern unsigned char *DAT_0213e7e0;
extern const unsigned char DAT_0213a0e0[];
extern const unsigned char DAT_0213a0d4[];

void FUN_overlay_15__021275e8(int index, int state) {
    unsigned int *entry;
    if (index < 0) return;
    if (index < 10) {
        entry = *(unsigned int **)(DAT_0213e7e0 + 16 + index * 4);
        *entry = 0xfffff3ffu & *entry;
        ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xf000) | (DAT_0213a0e0[state] << 12);
        return;
    }
    if (index - 10 < 2) {
        entry = *(unsigned int **)(DAT_0213e7e0 + 56 + (index - 10) * 4);
        *entry = 0xfffff3ffu & *entry;
        ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xf000) | (DAT_0213a0e0[state] << 12);
        return;
    }
    FUN_overlay_15__0213590c(*(void **)(DAT_0213e7e0 + 64 + (index - 12) * 4), -1, 0, DAT_0213a0d4[state]);
}
