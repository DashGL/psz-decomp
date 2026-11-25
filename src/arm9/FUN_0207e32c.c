// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec;

extern int FUN_0207a5dc(void *);
extern int FUN_0204770c(void *);
extern void *FUN_020be450(void);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020be5d4(void *, int, int, void *);
extern void FUN_02047ae8(void *);
extern void FUN_0204a9cc(void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
extern void FUN_0207e42c(void *);

int FUN_0207e32c(char *s) {
    int result;
    int point[2];
    int desc[13];
    Vec position;
    char *component;

    result = FUN_0207a5dc(s);
    if (!result) {
        if (!*(int *)(s + 388) && *(void *volatile *)(s + 48)) {
            component = *(char *volatile *)(s + 48);
            if (component) {
                if (*(unsigned short *)(s + 392)) {
                    FUN_0206e728(component, FUN_0207e42c);
                    FUN_0206e738(component, s);
                }
                *(int *)(s + 388) = 1;
            }
        }
        if (FUN_0204770c(s)) {
            *(int *)(s + 228) &= ~1;
            if (*(int *)(s + 376) != -1) {
                point[0] = *(int *)(s + 92);
                point[1] = *(int *)(s + 100);
                FUN_020bf680(s + 288, point, *(int *)(s + 300));
                FUN_020be5d4(FUN_020be450(), *(int *)(s + 376), 0, s + 288);
                FUN_02047ae8(desc);
                desc[0] = *(int *)(s + 232);
                desc[1] = *(int *)(s + 376);
                desc[2] = *(int *)(s + 96);
                desc[3] = *(int *)(s + 256);
                desc[4] = *(int *)(s + 228);
                desc[5] = 3;
                desc[6] = 6;
                FUN_0204a9cc(desc);
            }
            FUN_02035408(&position, *(int *)(s + 92), *(int *)(s + 96) - ((*(unsigned short *)(s + 104) - 16384) >> 4), *(int *)(s + 100));
            *(Vec *)(s + 92) = position;
        }
    }
    return result;
}
