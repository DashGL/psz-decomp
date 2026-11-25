// flags: -O4,s
extern const signed char DAT_021a0a9c[][9];
extern const signed char DAT_021a0a78[][9];
extern int FUN_overlay_22__02198694(void *, int, int, int);
extern unsigned int FUN_02035b60(unsigned int);

void FUN_overlay_22__021982d8(unsigned char *self, const signed char *selection) {
    int a = selection[0], b, i;
    unsigned char *config;
    if (a < 0 || a >= 8) return;
    b = selection[1];
    if (b < 0 || b >= 4) return;
    config = *(unsigned char **)(*(unsigned char **)(self + 8) + 60);
    if (*(signed char *)(config + 4) == 0) {
        int delay = 0;
        const signed char *order = DAT_021a0a9c[a];
        const signed char *indices = DAT_021a0a78[b];
        int step = *(signed char *)(config + 3);
        for (i = 0; i < 9; i++) {
            FUN_overlay_22__02198694(self, order[indices[i]], 1, delay);
            delay += step;
        }
    } else {
        for (i = 0; i < 9; i++) {
            unsigned int r = FUN_02035b60(9);
            int step;
            config = *(unsigned char **)(*(unsigned char **)(self + 8) + 60);
            step = *(signed char *)(config + 3);
            FUN_overlay_22__02198694(self, i, 1, r * step);
        }
    }
    *(int *)(self + 320) = 0;
}
