// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern Vec UNK_020fc958;
extern void *UNK_02108cf4;
extern int UNK_0211a614, UNK_020fb368, DAT_020fb368;
extern short UNK_020ed83c[];
extern int FUN_02098ee8(void *, void *), FUN_02078198(int), FUN_02078188(int), FUN_02036c34(void *), FUN_0203bee0(void *), FUN_020986f0(void *, void *, void *, void *, void *);
extern char *FUN_020352a4(void *, int), *FUN_020352c0(void *), *FUN_02039200(void *);
extern void FUN_02036f7c(void *, void *), FUN_020991c0(void *, int *), FUN_020987d0(void *, void *), FUN_0209882c(void *);

void FUN_020990b8(char *s) {
    Vec target, direction, out;
    char *actor;
    int speed, other;
    if (!FUN_02098ee8(s, &target)) return;
    direction = UNK_020fc958;
    actor = FUN_020352a4(UNK_02108cf4, *(int *)(*(char **)(s + 12) + 12));
    if (actor) {
        if (FUN_02078198(*(int *)(*(char **)(s + 12) + 12))) {
            if (!(UNK_0211a614 & 1)) {
                UNK_020fb368 = 410;
                UNK_0211a614 |= 1;
            }
            actor = FUN_020352c0(actor);
            if (actor) {
                FUN_02036f7c(actor, &direction);
                FUN_020991c0(&direction, &DAT_020fb368);
                speed = FUN_02036c34(actor);
                FUN_020991c0(&direction, &speed);
            }
        } else if (FUN_02078188(*(int *)(*(char **)(s + 12) + 12))) {
            actor = FUN_02039200(actor);
            if (actor) {
                direction.x = UNK_020ed83c[2 * (*(unsigned short *)(actor + 192) >> 4)];
                direction.z = UNK_020ed83c[2 * (*(unsigned short *)(actor + 192) >> 4) + 1];
                other = FUN_0203bee0(actor);
                FUN_020991c0(&direction, &other);
            }
        }
    }
    if (FUN_020986f0(*(void **)(*(char **)(s + 12) + 8), &out, s + 8, &target, &direction))
        FUN_020987d0(*(void **)(*(char **)(s + 12) + 8), &out);
    else
        FUN_0209882c(*(void **)(*(char **)(s + 12) + 8));
}
