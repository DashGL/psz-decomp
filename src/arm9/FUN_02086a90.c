// flags: -O4,s

typedef struct { int x, y, z; } Vec;

extern int DAT_020fc988;
extern unsigned char *FUN_02086a1c(int);
extern void FUN_020345f0(Vec *, void *);
extern void FUN_02036348(Vec *, void *, Vec *);
extern void FUN_02037390(int *, Vec *);
extern int FUN_0208e6a0(void *, int);

int FUN_02086a90(unsigned char *s) {
    int score = 0; int best = -1; int dist = DAT_020fc988; int nearest = -1; unsigned char *pos = s + 0x38; int i;
    for (i = 0; i <= 3; i++) {
        unsigned char *p = FUN_02086a1c(i);
        if (p != 0) {
            Vec b, a;
            int d;
            int value;
            FUN_020345f0(&a, p + 0x9c);
            FUN_02036348(&b, pos, &a);
            FUN_02037390(&d, &b);
            if (nearest == -1) { goto update_nearest; }
            {
                int closer = !(dist <= d);
                if (closer != 0) {
                update_nearest:
                    dist = d;
                    nearest = i;
                }
            }
            value = FUN_0208e6a0(*(unsigned char **)(s + 0x10) + 0x20, i);
            if (best == -1 || score < value) {
                score = value;
                best = i;
            }
        }
    }
    if (best != -1) return best;
    return (nearest != -1) ? nearest : -1;
}
