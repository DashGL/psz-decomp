// flags: -O4,s
struct Sub_02070f94 {
    unsigned char pad[0x2c];
    int *volatile arr;
};
struct S_02070f94 {
    unsigned char pad[8];
    int target;
    unsigned char pad2[0x10];
    struct Sub_02070f94 *sub;
};
int FUN_02070f94(struct S_02070f94 *s) {
    int i = 0;
    int acc = s->sub->arr[0];
    while (s->target >= acc) {
        i++;
        acc += s->sub->arr[i];
    }
    return i;
}
