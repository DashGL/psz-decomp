// flags: -O4,p
extern unsigned char DAT_020f6048[];
extern unsigned char DAT_020f6040[];
extern void FUN_02065774(const void *, void *, int);

unsigned long long FUN_020eaa40(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    union { unsigned long long u64; unsigned char u8[8]; } val, tmp; int i;
    val.u64 = ((unsigned long long)d & 3ULL) |
          (((unsigned long long)c & 1ULL) << 2) |
          (((unsigned long long)b & 0xffffffULL) << 3) |
          (((unsigned long long)a & 0xffffULL) << 27);
    for (i = 0; i < 6; i++) {
        val.u8[i] ^= 0xd6;
    }
    for (i = 0; i < 5; i++) {
        unsigned char b0 = val.u8[i];
        val.u8[i] = (unsigned char)((DAT_020f6048[((int)b0 >> 4) & 0xf] << 4) | DAT_020f6048[b0 & 0xf]);
    }
    FUN_02065774(&val, &tmp, 8);
    for (i = 0; i < 5; i++) {
        val.u8[DAT_020f6040[i]] = tmp.u8[i];
    }
    val.u8[7] = 0;
    val.u8[6] = 0;
    val.u8[5] &= 7;
    val.u64 <<= 1;
    val.u8[0] |= (((int)val.u8[5] >> 3) & 1);
    for (i = 0; i < 6; i++) {
        val.u8[i] ^= 0x67;
    }
    val.u8[7] = 0;
    val.u8[6] = 0;
    val.u8[5] &= 7;
    return val.u64;
}
