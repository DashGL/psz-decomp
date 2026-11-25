// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern char *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
extern void FUN_020345f0(Vec *, void *);
extern void FUN_02036348(Vec *, Vec *, Vec *);
extern void FUN_02037390(int *, Vec *);
extern int FUN_0207f770(void *);
extern int FUN_02086b2c(unsigned int, Vec *);
extern char *FUN_020352c0(void *);

int FUN_02037294(char *s, Vec *point) {
    int best = -1, i, bestDistance;
    Vec pos, other, diff, delta;
    int distance;
    for (i = 0; i <= 3; i++) {
        char *p = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (p && FUN_0203bf48(p)) {
            FUN_020345f0(&pos, p + 156);
            FUN_02036348(&diff, &pos, point);
            FUN_02037390(&distance, &diff);
            if (best == -1 || ((bestDistance > distance) ? E1 : E0)) {
                bestDistance = distance;
                best = i;
            }
        }
    }
    if ((unsigned int)s + 100u && FUN_0207f770((void *)((unsigned int)s + 100u)) == 3) {
        i = FUN_02086b2c(*(unsigned int *)(s + 12), point);
        if (i >= 0 && i != *(int *)(s + 12)) {
            char *p = FUN_020352c0(FUN_020352a4(DAT_02108cf4, i));
            if (p && *(void **)(p + 16) && !((*(unsigned int *)(*(char **)(p + 16) + 44) & 2) ? E1 : E0)) {
                int dist2;
                other = *(Vec *)(p + 56);
                FUN_02036348(&delta, &other, point);
                FUN_02037390(&dist2, &delta);
                if (best == -1 || ((bestDistance > dist2) ? E1 : E0)) best = i;
            }
        }
    }
    return best;
}
