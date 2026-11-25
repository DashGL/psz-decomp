// flags: -O4,p
struct Elem_0203efb4 {
    unsigned char pad[0x98];
};
struct S_0203efb4 {
    unsigned char pad[0x450];
    struct Elem_0203efb4 *arr[4];
};
struct Elem_0203efb4 *FUN_0203efb4(struct S_0203efb4 *s, int a, int b) {
    if (a >= 0 && a < 4 && b >= 0 && b < 0x16 && s->arr[a] != 0) {
        return &s->arr[a][b];
    }
    return 0;
}
