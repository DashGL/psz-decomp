// flags: -O4,s
typedef struct {
    unsigned int x, y, z;
} Vector;

extern char *FUN_02086e3c(void);
extern int FUN_020b03bc(void *, int, int, int);
extern void FUN_020b0450(void *, int, int);
extern void FUN_0203666c(void *);
extern void FUN_02035408(Vector *, unsigned int, unsigned int, unsigned int);
extern void *FUN_02046d94(void *, int, int);

int FUN_0203d13c(char *s) {
    int i;
    char *m = FUN_02086e3c() + 16;
    char *items = *(char **)(m + 4);
    int count = *(short *)(m + 8);
    if (items) {
        for (i = 0; i < count; i++) {
            unsigned char *p = (unsigned char *)items + 16 * i;
            if (p[0] == 3 && p[1] == 0 && p[2] == 10 && FUN_020b03bc(m, i, 0, 1) == 1) {
                unsigned int record[25];
                Vector v;
                Vector *pos;
                FUN_020b0450(m, i, 1);
                FUN_0203666c(record);
                record[21] = 28;
                record[22] = *(unsigned int *)(s + 252);
                pos = (Vector *)(s + 156);
                FUN_02035408(&v, pos->x, pos->y, pos->z);
                *(Vector *)((char *)record + 32) = v;
                record[17] = 1;
                record[18] = 20;
                record[19] = -1;
                record[7] |= 0x8000000;
                record[4] = 0;
                FUN_02046d94(record, 0, 0);
                return 1;
            }
        }
    }
    return 0;
}
