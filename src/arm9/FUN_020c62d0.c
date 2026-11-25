// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020c62ac(unsigned char *);
extern unsigned char FUN_020c6260(void *);

int FUN_020c62d0(void *param_1, unsigned char *param_2, unsigned char *param_3, unsigned int param_4) {
    unsigned char sp00[256];
    unsigned int i;

    if (param_4 & 3) {
        return -1;
    }
    FUN_020c62ac(sp00);
    for (i = 0; i < param_4; i += 4) {
        unsigned char *src = param_2 + i;
        unsigned char *dst = param_3 + i;
        param_3[i] = param_2[i] ^ FUN_020c6260(param_1);
        dst[1] = src[1] ^ FUN_020c6260(param_1);
        dst[2] = sp00[src[2]];
        dst[3] = src[3];
    }
    return 0;
}
