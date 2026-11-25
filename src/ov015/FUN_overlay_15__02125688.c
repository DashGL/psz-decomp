// flags: -O4,s
typedef struct {
    unsigned int *sprite;
    void *task;
    signed char mode;
} State_02125688;
extern State_02125688 *DAT_0213e7d8;
extern const unsigned char DAT_02139e08[][4];
extern void *FUN_overlay_15__021366c4(unsigned int, unsigned int);
extern void *FUN_overlay_15__021373d8(unsigned int, void (*)(void *, unsigned int), unsigned int, unsigned int);
extern unsigned int *FUN_overlay_15__02135af8(unsigned int, unsigned int);
extern void FUN_overlay_15__02125730(void *, unsigned int);
void FUN_overlay_15__02125688(unsigned int mode) {
    if (!DAT_0213e7d8) {
        DAT_0213e7d8 = FUN_overlay_15__021366c4(12, 4);
        DAT_0213e7d8->mode = (signed char)mode;
        DAT_0213e7d8->sprite = FUN_overlay_15__02135af8(0, DAT_02139e08[mode][0]);
        *DAT_0213e7d8->sprite = (*DAT_0213e7d8->sprite & 0xfe00ff00) | 0x00e50026;
        ((unsigned short *)DAT_0213e7d8->sprite)[2] = (((unsigned short *)DAT_0213e7d8->sprite)[2] & ~0x0c00) | 0x800;
        DAT_0213e7d8->task = FUN_overlay_15__021373d8(0, FUN_overlay_15__02125730, 0, 120);
    }
}
