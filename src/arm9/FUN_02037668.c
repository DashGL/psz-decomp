// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vector;
extern void *FUN_020be450(void);
extern void *FUN_020be5c0(void *, int, int);
extern void FUN_020bf73c(void *, unsigned int *);

int FUN_02037668(char *s, Vector *out, unsigned int *extra) {
    int i;
    for (i = 0; i < *(int *)(s + 164); i++) {
        char *p = *(char **)(s + 160) + 52 * i;
        unsigned int enabled = (*(short *)(p + 32) & 1) != 0;
        if (enabled) {
            void *m = FUN_020be450();
            void *q = FUN_020be5c0(m, *(int *)p, 0);
            if (q) {
                unsigned int result[3];
                FUN_020bf73c(q, result);
                out->x = result[0];
                out->y = 0;
                out->z = result[1];
                *extra = result[2];
                return 1;
            }
        }
    }
    return 0;
}
