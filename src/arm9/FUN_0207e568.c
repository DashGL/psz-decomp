// flags: -O4,s
typedef struct { int x, y, z; } V;
typedef struct { int v[9]; } Matrix;
extern char *UNK_02108c84;
extern int FUN_02047440(void *), FUN_0204770c(void *);
extern void FUN_0204bf88(void *);
int FUN_0207e568(char *s) {
    int result = FUN_02047440(s), value;
    char *p;
    V v;
    if (!result && FUN_0204770c(s)) {
        if (*(int *)(s + 264) < 5) {
            ++*(int *)(s + 264);
            value = (*(int *)(s + 268) * *(int *)(s + 264)) / 5;
            v.z = v.y = v.x = value;
            *(V *)(s + 80) = v;
        } else {
            value = *(int *)(s + 168) - *(int *)(s + 260);
            if (value < 0) value = 0;
            *(int *)(s + 168) = value;
        }
        if (UNK_02108c84) {
            p = *(char **)(UNK_02108c84 + 64 + 4 * *(int *)(UNK_02108c84 + 100));
            if (p) {
                *(unsigned short *)(s + 104) = *(unsigned short *)(p + 128);
                FUN_0204bf88(s);
                *(unsigned short *)(s + 106) = *(unsigned short *)(p + 130);
                FUN_0204bf88(s);
                *(Matrix *)(*(char **)(s + 48) + 144) = *(Matrix *)(s + 112);
            }
        }
    }
    return result;
}
