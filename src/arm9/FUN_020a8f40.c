// flags: -O4,p
struct S_020a8f40 {
    int f0;
    volatile unsigned int f4;
};
void FUN_020a8f40(struct S_020a8f40 *s, int delta) {
    int cur = (((int)(s->f4 & 0xfe000000)) >> 25) & 0x7f;
    int next = delta + cur;
    if (next > 100) {
        next = 100;
    }
    s->f4 = (s->f4 & 0x01ffffff) | (next << 25);
}
