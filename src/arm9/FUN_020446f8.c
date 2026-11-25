// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
extern Vector DAT_020fc958;
extern void *FUN_020be450(void);
extern int FUN_020be610(void *, int, unsigned int *);
int FUN_020446f8(char *s, Vector *out) {
    int i, result;
    *out = DAT_020fc958;
    result = 0;
    for (i = 0; i < *(int *)(s + 164); i++) {
        void *m = FUN_020be450();
        unsigned int pair[2];
        if (FUN_020be610(m, *(int *)(*(char **)(s + 160) + 52 * i), pair) != 0) {
            unsigned int px = pair[0];
            unsigned int pz = pair[1];
            out->x += px;
            out->z += pz;
            result = 1;
        }
    }
    return result;
}
