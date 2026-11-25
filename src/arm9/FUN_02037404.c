// flags: -O4,s
typedef struct { unsigned int v[3]; } V;
typedef struct { unsigned int w[8]; } S32;
extern short DAT_020ed83c[];
extern void *DAT_02108d5c;
extern int FUN_02074f94(void *), FUN_0207f770(void *);
extern void FUN_0203666c(void *), FUN_020472cc(void *, int), FUN_020bf680(void *, void *, unsigned int);
extern void FUN_020c0488(void *), FUN_020c0484(void *, int);
extern void FUN_020478ec(void *, void *, void *, void *), FUN_02074fc4(void *, void *, int, int);
extern void *FUN_02046d94(void *, int, int), *FUN_02036848(void *, const void *);
extern unsigned short *FUN_0203ffe8(void *, int, unsigned int);
extern void *FUN_02049f0c(void *, int);

void FUN_02037404(char *self, V *position, int angle, unsigned int value, unsigned int index, int option) {
    unsigned int descriptor[25];
    V shifted;
    unsigned int collider[13];
    unsigned int event[3];
    unsigned int shape[9];
    V direction;
    unsigned int options[2];
    unsigned int xz[2];
    unsigned short *record;
    void *effect;
    int slot = FUN_02074f94(self), i;
    int offset;
    if (slot == -1) return;
    FUN_0203666c(descriptor);
    descriptor[21] = 49;
    descriptor[22] = *(unsigned int *)(self + 12);
    *(V *)(descriptor + 8) = *position;
    *(unsigned short *)((char *)descriptor + 58) = angle;
    FUN_02046d94(descriptor, 0, option);
    shifted = *position;
    offset = (angle >> 4) * 2;
direction.v[0] = DAT_020ed83c[offset]; direction.v[1] = 0; direction.v[2] = DAT_020ed83c[offset + 1];
    FUN_02036848(&shifted, &direction);
    *(V *)(descriptor + 8) = shifted;
    descriptor[21] = 56;
    descriptor[24] = value;
    record = FUN_0203ffe8(DAT_02108d5c, **(signed char **)*(void **)(self + 20), index);
    ((unsigned short *)descriptor)[0] = record[0];
    ((unsigned short *)descriptor)[1] = record[1];
    for (i = 0; i < 5; i++) ((unsigned short *)descriptor)[i + 2] = record[i + 2];
    FUN_020472cc(descriptor, 56);
    descriptor[23] = (int)descriptor[23] >> 1;
    effect = FUN_02049f0c(descriptor, 7);
    if (effect) {
        xz[0] = position->v[0];
        xz[1] = position->v[2];
        FUN_020bf680(shape, xz, 614);
        FUN_020c0488(collider);
        collider[3] = shape[0];
        *(S32 *)(collider + 4) = *(S32 *)(shape + 1);
        collider[2] = 4096;
        FUN_020c0484(collider, 8);
        event[2] = 0;
        event[0] = 2;
        if (self + 100 && FUN_0207f770(self + 100) == 3) event[1] = 3;
        else event[1] = 1;
        options[0] = 0;
        options[1] = *(unsigned int *)(self + 12);
        FUN_020478ec(effect, collider, event, options);
        FUN_02074fc4(self, effect, slot, 0);
    }
}
