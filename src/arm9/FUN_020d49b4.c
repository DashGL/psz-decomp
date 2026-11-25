// flags: -O4,p
extern const unsigned char DAT_020feab4[];
extern void FUN_020d37bc(unsigned char *, int, unsigned short);
extern int FUN_020d3288(void *, unsigned char *, int);
int FUN_020d49b4(char *a) {
    unsigned short sp0;
    unsigned char sp2[8];
    int r4 = 0;
    if (*(int *)(*(int *)(a + 8) + 0x40) == 2) {
        sp0 = 5;
        __memcpy(sp2, &sp0, 2);
        r4 += 2;
    }
    __memcpy(sp2 + r4, DAT_020feab4, 2);
    sp2[r4 + 2] = 0x64;
    FUN_020d37bc(sp2, r4 + 3, *(unsigned short *)(a + 0x66));
    if (FUN_020d3288(a, sp2, r4 + 5) == 0) {
        return 0;
    }
    *(int *)(a + 0x90) = 0;
    return 1;
}
