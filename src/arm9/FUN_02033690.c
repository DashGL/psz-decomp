// flags: -O4,s
typedef struct { int x, y, z; } Vector;
extern const Vector DAT_020fc958;
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, Vector *, int);
extern int FUN_020c1d7c(void *, void *, int, int, int);

int FUN_02033690(void *a, void *b, Vector *v) {
    unsigned int nonzero = (v->x != DAT_020fc958.x || v->y != DAT_020fc958.y || v->z != DAT_020fc958.z);
    if (nonzero) {
        short pair[2];
        FUN_02090f74(pair, FUN_02090c20(), v, 0);
        return FUN_020c1d7c(a, b, pair[0], pair[1], -1);
    }
    return FUN_020c1d7c(a, b, 0, 0, -1);
}
