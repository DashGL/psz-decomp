//cpp
// flags: -O4,s
extern "C" int FUN_0203aecc(void *);
extern "C" int FUN_0203ae28(char *s) {
    unsigned int flags = *(unsigned int *)(s + 0xf8);
    int a = (flags & 1) ? 1 : 0;
    if (!a) {
        int b = (flags & 0x400) ? 1 : 0;
        if (!b && FUN_0203aecc(s)) return 1;
    }
    return 0;
}
