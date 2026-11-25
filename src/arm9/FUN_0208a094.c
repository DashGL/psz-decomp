// flags: -O4,s
struct S_0208a094 {
    int f0;
    int f4;
    int f8;
};
int FUN_0208a094(struct S_0208a094 *s) {
    int a = (s->f8 & 0x7f000000) >> 24;
    int b = (s->f4 & 0x01fc0000) >> 18;
    int c = (s->f4 & 0x0003f800) >> 11;
    int d = (s->f4 & 0x000007f0) >> 4;
    return a + (d + (b + c));
}
