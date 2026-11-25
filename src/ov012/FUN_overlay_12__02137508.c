// flags: -O4,s
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
void FUN_overlay_12__02137508(int *p, int count) {
    int t[4], i;
    FUN_02071d0c(t);
    FUN_02090b44(t);
    t[2] = 0xb3000;
    t[3] = 0x167000;
    for (i = 0; i < 7; i++, t[2] += 0xa000) {
        if (i < count) {
            *(short *)t = (i < 5) ? 40 : 42;
        } else if (i < 5) {
            *(short *)t = 41;
        } else {
            continue;
        }
        FUN_020c32b4(t, p[18]);
    }
}
