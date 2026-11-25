// flags: -O4,p
struct S4 { unsigned char b0, b1, b2, b3; };
struct S0c0 { unsigned char data[0xc0]; };
struct State {
    unsigned char pad[0x444];
    struct S4 arr1[11];
    struct S0c0 arr2[11];
};
extern void FUN_0206552c(const void *, void *, int);
extern void FUN_02065510(int, void *, int);

void FUN_020db1f0(int idx, struct State *st) {
    struct S4 *arr1;
    int prev;
    struct S0c0 *arr2;
    struct S4 tmp1;
    struct S0c0 tmp2;
    arr1 = st->arr1;
    arr2 = st->arr2;
    prev = idx - 1;
    while (prev >= 0) {
        if (arr1[idx].b2 < arr1[prev].b2) break;
        FUN_0206552c(&arr1[prev], &tmp1, 4);
        FUN_0206552c(&arr1[idx], &arr1[prev], 4);
        FUN_0206552c(&tmp1, &arr1[idx], 4);
        FUN_0206552c(&arr2[prev], &tmp2, 0xc0);
        FUN_0206552c(&arr2[idx], &arr2[prev], 0xc0);
        FUN_0206552c(&tmp2, &arr2[idx], 0xc0);
        idx = prev;
        prev--;
    }
    FUN_02065510(0, &arr1[10], 4);
    FUN_02065510(0, &arr2[10], 0xc0);
}
