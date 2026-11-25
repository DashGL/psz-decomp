// flags: -O4,p
extern const unsigned char DAT_020feab4[];
extern void FUN_020d37bc(unsigned char *, int, int);
extern int FUN_020d3288(void *, unsigned char *, int);

int FUN_020d4a24(char *a, int b, int c) {
    unsigned short sp0;
    unsigned char sp2[9];
    int len = 0;
    if (*(int *)(*(int *)(a + 8) + 0x40) == 2) {
        sp0 = 7;
        __memcpy(sp2, &sp0, 2);
        len += 2;
    }
    __memcpy(sp2 + len, DAT_020feab4, 2);
    sp2[len + 2] = 0x65;
    FUN_020d37bc(sp2, len + 3, b);
    len += 5;
    if (b != c) {
        FUN_020d37bc(sp2, len, c);
        len += 2;
    }
    if (FUN_020d3288(a, sp2, len) == 0) {
        return 0;
    }
    return 1;
}
