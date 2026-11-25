// flags: -O4,s
extern int FUN_020b737c(void *, void *, int), FUN_020b64b4(void *, void *, int), FUN_020b646c(void *, void *, void *), FUN_020b63fc(void *), FUN_020b63e0(void *, void *);
int FUN_020b5ce4(char *s, void *a, void *b, void *c, void *d) {
    int base = *(unsigned short *)(s + 68) + *(unsigned char *)(s + 86);
    int first = FUN_020b737c(s, d, 4), second = FUN_020b64b4(s, a, 1), third = FUN_020b646c(s, a, c), fourth = FUN_020b63fc(s);
    int fifth = FUN_020b63e0(s, b);
    return second + (third + (first + (fourth + (base + fifth))));
}
