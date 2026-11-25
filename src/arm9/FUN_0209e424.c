// flags: -O4,s
typedef struct { int x, y, z; } V338;
typedef struct {
    V338 v;
    unsigned short a;
    int b, c, d, e, f, g, h;
    unsigned short i;
} P338;

extern unsigned int DAT_020fb6cc[];
extern unsigned int DAT_020fb6fc[];
extern char *DAT_02108c64;
extern void *DAT_02108d64;
extern V338 DAT_020fc958;
extern int DAT_020fb624[];
extern int DAT_020fb604[];
extern char DAT_020fb618[];
extern char DAT_020fb638[];
extern char DAT_020fb664[];

extern void FUN_0203020c(void *, void *, int);
extern void FUN_0209a3d4(void *, int);
extern void FUN_02099ec8(void *, V338 *, unsigned short);
extern void FUN_020306e4(void *, void *, int, int);
extern void FUN_0208e1f4(void *);
extern void FUN_0208e25c(void *, void *);
extern void FUN_0209f2d0(void *, int);
extern void FUN_0209f3d0(void *, int);
extern void FUN_0209a478(void *, int);
extern void FUN_020926d0(void *, void *, unsigned, int, int, int);
extern void FUN_02092700(void *, P338);
extern void FUN_02044c08(void *, void *, int);
extern void FUN_0209a33c(void *, int);
extern void FUN_0209e6c4(void *, void *);
extern int FUN_0203068c(void *);
extern int FUN_0208e1d4(void *, int);
extern char *FUN_02032ca0(void *, int);
extern int **FUN_02041b2c(void *);
extern char *FUN_02090c20(void);
extern void *FUN_0209f170(void);

void *FUN_0209e424(char *s, void *arg) {
    P338 param;
    V338 initial;
    V338 point;
    int delta[2];
    int scale;
    int **points;
    char *table;
    char *record;
    int index;
    int kind;

    FUN_0203020c(s, arg, 20);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fb6cc;
    *(void **)(s + 48) = DAT_020fb6fc;
    {
        unsigned short rot = *(unsigned short *)(s + 44);
        initial = *(V338 *)(s + 28);
        FUN_02099ec8(s + 72, &initial, rot);
    }
    *(void **)(s + 288) = **(void ***)(s + 4);
    FUN_020306e4(s + 292, *(char **)(s + 288) + 8, 1, 1);
    FUN_020306e4(s + 300, *(char **)(s + 288) + 16, 1, 0);
    FUN_020306e4(s + 308, *(void **)(s + 288), 1, 1);
    FUN_020306e4(s + 316, *(char **)(s + 288) + 24, 1, 0);
    *(int *)(s + 324) = 0;
    *(int *)(s + 420) = 0;

    table = FUN_02032ca0(DAT_02108c64, ((signed char *)DAT_02108c64)[22]);
    if (table) {
        if (DAT_02108d64) {
            points = FUN_02041b2c(DAT_02108d64);
            if (points) {
                unsigned int i;
                for (i = 0; i < 4; i++) {
                    int lane = (*(int *)(table + 36) + i) & 3;
                    if (FUN_0208e1d4(table, lane)) {
                        int **p = points;
                        int *a = p[i];
                        int *b;
                        p += i;
                        b = p[4];
                        if (a && b) {
                            int dy = b[1] - a[1];
                            int dx = b[0] - a[0];
                            delta[0] = dx;
                            delta[1] = dy;
                            FUN_0208e1f4(delta);
                            scale = 40960;
                            FUN_0208e25c(delta, &scale);
                            *(int *)(s + 372 + 12 * lane) = b[0] + delta[0];
                            *(int *)(s + 380 + 12 * lane) = b[1] + delta[1];
                            *(int *)(s + 376 + 12 * lane) = 0;
                        }
                    } else {
                        *(V338 *)(s + 372 + 12 * lane) = DAT_020fc958;
                    }
                }
            }
        }
    }

    record = *(char **)(s + 288);
    index = ((signed char *)record)[32];
    if (index < 5) {
        kind = DAT_020fb624[index];
        if (kind == DAT_020fb604[1] || kind == DAT_020fb604[4]) {
            *(int *)(FUN_02090c20() + 44) = 1;
            FUN_0209f2d0(FUN_0209f170(), DAT_020fb624[((signed char *)*(void **)(s + 288))[32]]);
            FUN_0209f3d0(FUN_0209f170(), 0);
            record = *(char **)(s + 288);
            kind = DAT_020fb624[((signed char *)record)[32]];
            if (kind == DAT_020fb604[1] || kind == DAT_020fb604[4]) {
                int type = 0;
                if (kind == DAT_020fb604[1]) {
                    type = 23;
                    FUN_0209a478(s + 48, ((signed char *)record)[33]);
                } else if (kind == DAT_020fb604[4]) {
                    type = 24;
                    *(int *)(s + 68) = 5;
                }
                {
                    unsigned short rot = *(unsigned short *)(s + 44);
                    point = *(V338 *)(s + 28);
                    FUN_020926d0(&param, &point, rot, FUN_0203068c(s), type, 4);
                }
                param.e = 1;
                FUN_02092700(s + 72, param);
                FUN_02044c08(s + 72, DAT_020fb618, 0);
                FUN_0209a33c(s + 72, FUN_0203068c(s));
                *(int *)(s + 280) = 180;
            }
        } else if (kind == DAT_020fb604[3]) {
            FUN_0209e6c4(s + 328, DAT_020fb638);
        } else {
            FUN_0209e6c4(s + 328, DAT_020fb664);
        }
    }
    return s;
}
