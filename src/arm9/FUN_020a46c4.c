// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { unsigned short s[9]; } S9;
typedef struct { int f0; int f4; int f8; } Entry12;
extern char UNK_0211a9c4[];
extern void *FUN_02078dac(void *, int, int), *FUN_020afe98(void *, int);
extern void FUN_020a4810(void *, void *, void *, int), FUN_02037ff0(void *, void *), FUN_02038084(void *, int), FUN_020ae500(void *, int, int), FUN_020a4840(void *, int, void *, void *), FUN_020a4888(void *, int), FUN_02078f48(void *, int, void *), FUN_02078f88(void *, int);

void FUN_020a46c4(char *s, int slot, unsigned char *appearance, unsigned short *identity) {
    Vec position;
    unsigned short angle;
    if (slot < 0 || slot >= 4) return;
    if (((void **)(s + 28))[slot]) return;
    ((void **)(s + 28))[slot] = FUN_02078dac(appearance, slot, 1);
    FUN_020a4810(s, &position, &angle, slot);
    FUN_02037ff0(((void **)(s + 28))[slot], &position);
    FUN_02038084(((void **)(s + 28))[slot], angle);
    *(S9 *)(s + 44 + 20 * slot) = *(S9 *)identity;
    *(unsigned short *)(s + 62 + 20 * slot) = identity[9];
    FUN_020ae500(&((Entry12 *)(s + 124))[slot].f4, 4, appearance[86]);
    if (!*(int *)(s + 4))
        FUN_020a4840(s, slot, appearance, s + 44 + 20 * slot);
    else {
        FUN_020a4888(s, 1);
        *(int *)(s + 8) = 0;
        *(int *)(s + 4) = 1;
    }
    FUN_02078f48(((void **)(s + 28))[slot], 0, FUN_020afe98(UNK_0211a9c4, 2 * appearance[36]));
    FUN_02078f48(((void **)(s + 28))[slot], 1, FUN_020afe98(UNK_0211a9c4, 2 * appearance[36] + 1));
    FUN_02078f88(((void **)(s + 28))[slot], 0);
}
