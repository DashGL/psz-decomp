enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int x, y, z; } Vector;
extern void FUN_0203666c(void *);
extern char *FUN_02046d94(void *, int, int);
void FUN_02036c94(char *s) {
    unsigned int record[25];
    Vector v;
    char *data;
    int flags = 0;
    if (((*(unsigned int *)(s + 0x94) & 0x10) ? E1 : E0) != E0) {
        flags = 0x7fff;
    }
    FUN_0203666c(record);
    record[21] = 6;
    *(char **)(s + 0xc4) = FUN_02046d94(record, flags, 0);
    data = **(char ***)(s + 0x14);
    v.x = *(unsigned int *)(data + 0xc);
    v.y = 0x1000;
    v.z = *(unsigned int *)(data + 0x10);
    *(Vector *)(*(char **)(s + 0xc4) + 0x50) = v;
    if (*(void **)(s + 0xc8)) {
        *(unsigned int *)(*(char **)(s + 0xc4) + 0xe4) |= 1;
    }
}
