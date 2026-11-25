// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char *FUN_02085684(int);
extern int FUN_0203b41c(void *);
extern int FUN_02085880(int);
extern void FUN_02037ff0(void *, void *);
extern void FUN_02075124(void *, void *);
extern void FUN_0203bca0(void *);

void FUN_0208d400(char *s) {
    char *actor = FUN_02085684(*(signed char *)(s + 12));
    Vec c, b, a;
    enum { E0 = 0, E1 = 1 };

    if (!actor) return;
    if (FUN_0203b41c(actor)) return;
    if (FUN_02085880(*(signed char *)(s + 12)) == 1) {
        int z = *(int *)(s + 8);
        b.x = *(int *)(s + 4);
        b.y = 0;
        b.z = z;
        FUN_02037ff0(actor, &b);
        c.x = *(int *)(s + 4);
        c.y = 0;
        c.z = *(int *)(s + 8);
        FUN_02075124(actor, &c);
        *(short *)(actor + 192) = *(unsigned short *)(s + 14);
        if (((*(int *)(actor + 248) & 0x1000000) ? E1 : E0) == 0) {
            *(int *)(actor + 248) &= ~2;
            *(int *)(actor + 248) &= ~1;
            *(int *)(actor + 248) |= 0x1000000;
        }
    } else {
        int z = *(int *)(s + 8);
        a.x = *(int *)(s + 4);
        a.y = 0;
        a.z = z;
        FUN_02037ff0(actor, &a);
        *(short *)(actor + 192) = *(unsigned short *)(s + 14);
        *(int *)(actor + 248) &= ~0x1000000;
    }
    if (*(unsigned char *)(s + 13) == 1)
        *(short *)(actor + 340) = 10000;
    else
        FUN_0203bca0(actor);
}
