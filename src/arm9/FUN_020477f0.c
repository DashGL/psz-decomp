// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern void FUN_020473e8(void *, void *, int);
extern void FUN_02035408(Vec *, unsigned int, unsigned int, unsigned int);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020c0488(void *);
extern void *FUN_02047798(void *, void *);
extern int FUN_0204dab0(unsigned int);
extern int FUN_0204dac4(unsigned int);
extern void FUN_02032dfc(void *, void *);
extern int FUN_0206d45c(void *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_020478ec(void *, void *, void *, void *);
void FUN_020477f0(char *s, char *request) {
    Vec record, v;
    unsigned int point[2], descriptor[5], args[2];
    FUN_020473e8(s, request, 0);
    *(unsigned int *)(s + 260) = *(unsigned int *)(request + 92);
    *(int *)(s + 172) = 2;
    FUN_02035408(&v, *(unsigned int *)(s + 92), *(unsigned int *)(s + 96), *(unsigned int *)(s + 100));
    *(Vec *)(s + 92) = v;
    point[0] = *(unsigned int *)(s + 92);
    point[1] = *(unsigned int *)(s + 100);
    FUN_020bf680(s + 272, point, 2048);
    FUN_020c0488(s + 308);
    FUN_02047798(s + 320, s + 272);
    *(int *)(s + 316) = 4096;
    *(int *)(s + 360) = -1;
    if (FUN_0204dab0(*(unsigned int *)(s + 232)) || FUN_0204dac4(*(unsigned int *)(s + 232))) {
        record = *(Vec *)0x020ed63c;
        record.x = 1;
        record.y = 6;
        FUN_02032dfc(descriptor, *(void **)0x02108c64);
        if (!FUN_0206d45c(descriptor)) *(unsigned int *)(s + 228) |= 0x400000;
        FUN_0200c938(args, 8);
        args[1] = *(unsigned int *)(s + 232);
        FUN_020478ec(s, s + 308, &record, args);
    }
}
