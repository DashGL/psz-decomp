extern unsigned char DAT_0211e5bc[];
extern unsigned char *FUN_020e961c(void);
#pragma thumb off
extern void FUN_020656b8(void *, unsigned int, unsigned int);
#pragma thumb on
unsigned int FUN_020e4fd4(void **out) {
    int i;
    if (!FUN_020e961c()) return 0;
    FUN_020656b8(DAT_0211e5bc, 0, 32);
    for (i = 0; i <= FUN_020e961c()[14]; i++) {
        unsigned char *state = FUN_020e961c();
        unsigned char *entry = FUN_020e961c();
        if (!(*(unsigned int *)(state + 0x2f0) & (1u << entry[0x2d0 + i]))) break;
        DAT_0211e5bc[i] = FUN_020e961c()[0x2d0 + i];
    }
    *out = DAT_0211e5bc;
    return FUN_020e961c()[14] + 1;
}
