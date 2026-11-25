// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef union { int align; char b[100]; } Effect;
extern int FUN_0207a5dc(void *), FUN_0204771c(void *);
extern void FUN_0203666c(void *), FUN_02046d94(void *, int, int);

int FUN_0207b3ac(char *s) {
    Effect b, a;
    int result = FUN_0207a5dc(s);
    if (!result && FUN_0204771c(s)) {
        (*(int *)(s + 380))++;
        if (*(int *)(s + 380) > *(int *)(s + 384)) {
            FUN_0203666c(b.b);
            *(Vec *)(b.b + 32) = *(Vec *)(s + 92);
            *(short *)(b.b + 58) = *(unsigned short *)(s + 106);
            *(int *)(b.b + 84) = 32;
            *(int *)(b.b + 88) = *(int *)(s + 232);
            *(int *)(b.b + 92) = *(int *)(s + 388);
            FUN_02046d94(b.b, *(int *)(s + 276), 1);
            *(int *)(s + 380) = 0;
        }
        (*(int *)(s + 392))++;
        if (*(int *)(s + 392) > *(int *)(s + 396)) {
            FUN_0203666c(a.b);
            *(Vec *)(a.b + 32) = *(Vec *)(s + 92);
            *(short *)(a.b + 58) = *(unsigned short *)(s + 106);
            *(int *)(a.b + 84) = 102;
            *(int *)(a.b + 88) = *(int *)(s + 232);
            *(int *)(a.b + 92) = *(int *)(s + 388) / 2;
            FUN_02046d94(a.b, *(int *)(s + 276), 0);
            *(int *)(s + 392) = 0;
        }
    }
    return result;
}
