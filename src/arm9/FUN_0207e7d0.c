// flags: -O4,s
typedef struct { int x, y, z; } V;
extern int FUN_0207a5dc(void *), FUN_0204770c(void *);
extern void FUN_02035408(void *, int, int, int);
int FUN_0207e7d0(char *s) {
    V scale, p;
    int result = FUN_0207a5dc(s), v;
    if (!result && FUN_0204770c(s)) {
        v = (*(int *)(s + 384) * *(int *)(s + 148)) / *(int *)(s + 72);
        scale.x = v;
        scale.y = v;
        scale.z = v;
        *(V *)(s + 80) = scale;
        *(int *)(s + 168) = 20;
        FUN_02035408(&p, *(int *)(s + 92), *(int *)(s + 96) - (((int)*(unsigned short *)(s + 284) - 16384) >> 4) - *(int *)(s + 380), *(int *)(s + 100));
        *(V *)(s + 92) = p;
        *(int *)(s + 380) += 23;
    }
    return result;
}
