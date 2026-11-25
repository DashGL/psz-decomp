// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char DAT_0211c844[];
extern int FUN_02047440(void *), FUN_0204770c(void *), FUN_0207b860(void *, int);
extern void *FUN_0207ec24(void *, int, int, int);
extern void FUN_02046d00(void *, void *), FUN_020472cc(void *, int), FUN_020456bc(void *, int), FUN_02035408(void *, int, int, int), FUN_02047314(void *, int);
#define W(n) (*(int *)(s + (n)))
int FUN_0207eaf0(char *s) {
    int result = FUN_02047440(s), i, extra, scale;
    void *child;
    int desc[25], special[25];
    Vec size, pos;
    if (!result && FUN_0204770c(s) && W(400) > 0) {
        for (i = 0; i < W(404); ++i) {
            FUN_02046d00(desc, s + 260);
            FUN_020472cc(desc, desc[21]);
            FUN_020456bc(desc, desc[21]);
            extra = W(416);
            if (W(400) == 1) extra = 0;
            child = FUN_0207ec24(desc, W(408), W(412), extra);
            *(void **)(s + 364 + 4 * (i + (W(400) - 1) * W(404))) = child;
        }
        --W(400);
        if (W(360) == 1 && W(420) == 0) {
            FUN_02046d00(special, s + 260);
            special[21] = 17;
            FUN_020472cc(special, 17);
            FUN_020456bc(special, special[21]);
            scale = W(408) + FUN_0207b860(DAT_0211c844, W(412));
            size.x = scale;
            size.y = scale;
            size.z = scale;
            *(Vec *)((char *)special + 44) = size;
            FUN_02035408(&pos, W(92), (W(416) / 2 + 2048) + W(96), W(100));
            *(Vec *)((char *)special + 32) = pos;
            FUN_02047314(special, 0);
            W(420) = 1;
        }
    }
    return result;
}
