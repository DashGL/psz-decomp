// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_0204adbc(void *);
extern void FUN_020492e8(void *, int);
extern void FUN_0204b3c0(void *, int);
extern void FUN_0203666c(void *);
extern void FUN_020472cc(void *, int);
extern void FUN_020456bc(void *, int);
extern void FUN_02047314(void *, int);
extern void FUN_02046d00(void *, void *);
extern char *FUN_0204daa8(unsigned int);
extern int FUN_0204fbd0(void *);

void FUN_020492fc(char *s) {
    unsigned int a[25];
    unsigned int b[25];
    Vec v1;
    Vec v2;
    char *p;
    char *owner;

    *(int *)(s + 0x104) = 0;
    *(int *)(s + 0x108) = 1;
    p = *(char **)(s + 0x10c);
    if (p) {
        *(int *)(p + 0x104) = 0;
        *(int *)(p + 0x108) = 1;
    }
    p = *(char **)(s + 0x114);
    if (p) {
        if (p) {
            FUN_0204adbc(p);
            *(void **)(s + 0x114) = 0;
        }
    }
    p = *(char **)(s + 0x110);
    if (p) {
        if (p) {
            FUN_0204adbc(p);
            *(void **)(s + 0x110) = 0;
        }
    }
    if (*(int *)(s + 0x118)) {
        return;
    }
    v1.x = 0xb33;
    v1.y = 0xb33;
    v1.z = 0xb33;
    *(Vec *)(s + 0x50) = v1;
    FUN_020492e8(s, 0x800);
    *(unsigned int *)(s + 0xe4) |= 0x04000000;
    FUN_0204b3c0(s, 5);
    p = *(char **)(s + 0x10c);
    if (p) {
        v2.x = 0xb33;
        v2.y = 0xb33;
        v2.z = 0xb33;
        *(Vec *)(p + 0x50) = v2;
        FUN_020492e8(*(void **)(s + 0x10c), 0x800);
        p = *(char **)(s + 0x10c);
        *(unsigned int *)(p + 0xe4) |= 0x04000000;
        FUN_0204b3c0(*(void **)(s + 0x10c), 5);
    }
    FUN_0203666c(a);
    a[21] = 0x37;
    a[16] = 8;
    FUN_020472cc(a, 0x37);
    FUN_020456bc(a, a[21]);
    a[22] = *(unsigned int *)(s + 0xe8);
    a[17] = 1;
    a[18] = 0x18;
    a[19] = ~0u;
    FUN_02047314(a, 0);
    owner = FUN_0204daa8(*(unsigned int *)(s + 0xe8));
    if (owner && *(void **)(s + 0x10c) && *(void **)(owner + 0x1b0) && FUN_0204fbd0(*(void **)(owner + 0x1b0))) {
        FUN_02046d00(b, a);
        b[16] = 5;
        b[17] = 0;
        b[18] = ~0u;
        b[19] = ~0u;
        FUN_02047314(b, 0);
    }
    *(int *)(s + 0x118) = 1;
}
