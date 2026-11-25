// flags: -O4,s
extern void FUN_020405c8(void *);
static void init4(char *p, char *end) {
    do {
        FUN_020405c8(p);
        p += 0x14;
    } while (p < end);
}
void *FUN_020403a0(char *s) {
    FUN_020405c8(s);
    init4(s + 0x14, s + 0x64);
    FUN_020405c8(s + 0x64);
    *(unsigned int *)(s + 0x78) = 0;
    return s;
}
