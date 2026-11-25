// flags: -O4,s
extern unsigned char *DAT_0213e784;
extern const unsigned char DAT_02139d74[];
#pragma thumb off
extern int FUN_0205c73c(int, int), FUN_0205c700(int, int);
#pragma thumb on
extern void FUN_overlay_15__02135aac(int, int, void *);
void FUN_overlay_15__02124d68(void) {
    unsigned char *state;
    unsigned int *entry;
    unsigned int palette;
    int tick = FUN_0205c73c(DAT_0213e784[9] + 1, 40);
    DAT_0213e784[9] = tick;
    tick = FUN_0205c700(DAT_0213e784[9], 5) + 71;
    FUN_overlay_15__02135aac(0, tick, *(void **)(DAT_0213e784 + 4));
    entry = *(unsigned int **)(DAT_0213e784 + 4);
    ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xc00u) | 0x400;
    state = DAT_0213e784;
    palette = DAT_02139d74[state[8]];
    entry = *(unsigned int **)(state + 4);
    *entry &= ~0xc00u;
    ((unsigned short *)entry)[2] = (((unsigned short *)entry)[2] & ~0xf000u) | (palette << 12);
    entry = *(unsigned int **)(DAT_0213e784 + 4);
    *entry = (*entry & 0xfe00ff00u) | 0x00e6008b;
}