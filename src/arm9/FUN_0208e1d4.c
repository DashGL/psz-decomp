// flags: -O4,p
struct S_0208e1d4 {
    unsigned char pad[0x18];
    signed char arr[4];
};
int FUN_0208e1d4(struct S_0208e1d4 *s, int idx) {
    int v;
    if (idx >= 0 && idx < 4) {
        v = s->arr[idx];
    } else {
        v = -1;
    }
    return v >= 0;
}
