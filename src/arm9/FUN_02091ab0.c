// flags: -O4,s
struct Item_02091ab0 {
    int a;
    int b;
};
struct S_02091ab0 {
    unsigned char pad[0x10];
    int count;
    unsigned char pad2[0x18];
    struct Item_02091ab0 *arr;
};
void FUN_02091ab0(struct S_02091ab0 *s, int idx, int a, int *b) {
    if (idx < 0) {
        return;
    }
    if (s->count + 1 <= idx) {
        return;
    }
    if (s->arr == 0) {
        return;
    }
    s->arr[idx].a = a;
    s->arr[idx].b = *b;
}
