// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef union { int align; char b[100]; } Effect;
extern int FUN_0207a5dc(void *), FUN_0204771c(void *), FUN_0204a9cc(void *);
extern void *FUN_020be450(void);
extern void FUN_020bf680(void *, void *, int), FUN_020be5d4(void *, int, int, void *), FUN_02047ae8(void *), FUN_0203666c(void *), FUN_02046d94(void *, int, int);

int FUN_0207a864(char *s) {
    Effect e;
    int descriptor[13], position[2], result = FUN_0207a5dc(s);
    if (!result) {
        if (FUN_0204771c(s)) {
            if (*(int *)(s + 376) != -1) {
                position[0] = *(int *)(s + 92);
                position[1] = *(int *)(s + 100);
                FUN_020bf680(s + 288, position, *(int *)(s + 300));
                FUN_020be5d4(FUN_020be450(), *(int *)(s + 376), 0, s + 288);
                FUN_02047ae8(descriptor);
                descriptor[0] = *(int *)(s + 232);
                descriptor[1] = *(int *)(s + 376);
                descriptor[2] = *(int *)(s + 96);
                descriptor[3] = *(int *)(s + 256);
                descriptor[4] = *(int *)(s + 228);
                descriptor[5] = 3;
                descriptor[6] = 2;
                descriptor[7] = 1;
                if (FUN_0204a9cc(descriptor) && (*(int *)(s + 228) & 2048)) return 1;
            }
            (*(int *)(s + 380))++;
            if (*(int *)(s + 380) > *(int *)(s + 384)) {
                FUN_0203666c(e.b);
                *(Vec *)(e.b + 32) = *(Vec *)(s + 92);
                *(int *)(e.b + 84) = 31;
                *(int *)(e.b + 88) = *(int *)(s + 232);
                FUN_02046d94(e.b, *(int *)(s + 280), 0);
                *(int *)(s + 380) = 0;
            }
        }
    }
    return result;
}
