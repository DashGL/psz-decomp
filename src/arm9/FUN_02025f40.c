// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern int *FUN_02025f18(unsigned char);

int *FUN_02025f40(int a, int b, unsigned char c) {
    int *p = FUN_02025f18(c);
    if (p != 0) {
        p[0] = a;
        p[1] = b;
        p[2] = 0;
        *(signed char *)((char *)p + 0xc) = *(signed char *)(b + 0x73);
        *(unsigned char *)((char *)p + 0xd) = c;
    }
    return p;
}
