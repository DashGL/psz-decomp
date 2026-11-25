// flags: -O4,s
extern void FUN_overlay_15__0213590c(void *, int, int, int);
extern unsigned char *DAT_0213e7dc;
extern const unsigned char DAT_02139e10[];
extern const unsigned char DAT_02139e14[];

void FUN_overlay_15__0212650c(int index, int state) {
    unsigned int *entry;
    if (index < 0) return;
    if (index < 47) {
        entry = *(unsigned int **)(DAT_0213e7dc + 48 + index * 4);
        *entry = 0xfffff3ffu & *entry;
        ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xf000) | (DAT_02139e10[state] << 12);
        return;
    }
    if (index - 47 < 4) {
        entry = *(unsigned int **)(DAT_0213e7dc + 236 + (index - 47) * 4);
        *entry = 0xfffff3ffu & *entry;
        ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xf000) | (DAT_02139e10[state] << 12);
        return;
    }
    FUN_overlay_15__0213590c(*(void **)(DAT_0213e7dc + 252 + (index - 51) * 4), -1, 0, DAT_02139e14[state]);
}
