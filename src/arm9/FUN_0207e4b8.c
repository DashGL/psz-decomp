// flags: -O4,s
typedef struct { int x, y, z; } V_0207e4b8;
extern const int UNK_020f2b98[], UNK_020f2ba4[];
extern char UNK_0211c844[];
extern void FUN_020473e8(void *, void *, int), FUN_02035408(void *, int, int, int);
extern int FUN_0207b860(void *, int);
void FUN_0207e4b8(char *s, void *source, int index) {
    int scale, range;
    V_0207e4b8 zero, v;
    FUN_020473e8(s, source, 0);
    scale = 4096;
    range = 0;
    if (index >= 0 && index < 3) {
        scale = (UNK_020f2b98[index] << 12) / 10;
        range = (UNK_020f2ba4[index] << 12) / 10;
    }
    *(int *)(s + 72) = 20 * *(int *)(s + 76);
    *(int *)(s + 260) = 2;
    *(int *)(s + 168) = 31;
    *(int *)(s + 268) = scale + FUN_0207b860(UNK_0211c844, range);
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    *(V_0207e4b8 *)(s + 80) = zero;
    *(int *)(s + 264) = 0;
    FUN_02035408(&v, *(int *)(s + 92), *(int *)(s + 96) + 409, *(int *)(s + 100));
    *(V_0207e4b8 *)(s + 92) = v;
    *(int *)(s + 172) = 2;
}
