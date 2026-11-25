// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern unsigned long long DAT_0211c844[3];
extern int FUN_overlay_24__021983a0(void *, void *);
extern void FUN_overlay_24__02198e70(void *, void *, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_24__02198464(int *self) {
    Vec direction;
    void *owner = (void *)self[1];
    unsigned long long next;
    if (FUN_overlay_24__021983a0((void *)self[2], &direction) == 1)
        FUN_overlay_24__02198e70(owner, &direction, 2048, 0);
    FUN_02040c0c(owner, 0, 6, 4096, 0);
    next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2]; DAT_0211c844[0] = next;
    self[3] = (unsigned int)(((next >> 32) * 3ull) >> 32) + 1;
}
