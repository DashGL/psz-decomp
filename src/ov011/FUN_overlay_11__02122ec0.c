// flags: -O4,p
extern char DAT_0211a9c4[];
extern void *FUN_020afe98(void *, int);
extern void FUN_02078f48(void *, int, void *);
void FUN_overlay_11__02122ec0(void **p, int index) {
    if (index >= 0 && index < 14 && p[5]) {
        FUN_02078f48(p[5], 0, FUN_020afe98(DAT_0211a9c4, 2 * index));
        FUN_02078f48(p[5], 1, FUN_020afe98(DAT_0211a9c4, 2 * index + 1));
    }
}
