// flags: -O4,s
#pragma thumb off
extern unsigned int FUN_02065774(const void *, void *, unsigned int);
#pragma thumb on
extern signed char *DAT_02100158[];
extern unsigned char DAT_020f6000[];
extern unsigned char DAT_020f6010[];

unsigned int FUN_020dc800(unsigned char *input, unsigned char *output) {
    unsigned char temporary[16];
    unsigned char *bytes;
    unsigned char *perm;
    unsigned int result;
    int i;
    for (i = 0; i < 13; i++) output[i] = input[i] ^ input[13 + i % 7];
    for (i = 0; i < 7; i++) output[i + 3] ^= input[i + 13];
    for (i = 0; i < 13; i++) output[i] ^= ((signed char * volatile *)DAT_02100158)[1][i];
    FUN_02065774(output, temporary, 13);
    perm = DAT_020f6000;
    for (i = 0, bytes = temporary; i < 13; i++) {
        output[*perm++] = *bytes++;
    }
    for (i = 0; i < 13; i++) output[i] ^= ((signed char * volatile *)DAT_02100158)[3][i];
    for (i = 0; i < 13; i++) {
        int value = output[i];
        output[i] = (DAT_020f6010[(value >> 4) & 15] << 4) | DAT_020f6010[value & 15];
    }
    for (i = 0; i < 3; i++) {
        output[i] ^= output[i + 6];
        output[i + 3] ^= output[i + 9];
        output[i + 6] ^= output[i + 3];
        output[i + 9] ^= output[i];
        result = output[i] ^ output[12];
        output[12] = result;
    }
    return result;
}
