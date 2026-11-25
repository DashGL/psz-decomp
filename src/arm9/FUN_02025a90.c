// near: 26/312b diff (0x138/0x138), 0 bad relocs — instruction scheduling in ephemeral port RNG probe loop
// flags: -O4,p -noThumb
struct State25a90 {
    char pad[0x68];
    unsigned long long seed;
    unsigned long long mult;
    unsigned long long add;
};

extern int DAT_021070b4[];
extern int FUN_02025990(void *, int *);
extern int FUN_02025a2c(void *, int, unsigned short);


extern unsigned long long DAT_02107054[];
static inline unsigned int rng_u32(void) {
    DAT_02107054[13] = DAT_02107054[14] * DAT_02107054[13] + DAT_02107054[15];
    return (unsigned int)(DAT_02107054[13] >> 32);
}


int FUN_02025a90(void *a0) {
    int res;
    unsigned short ports[2];
    unsigned char flags[2];
    int pass;
    int i;

    ports[0] = (unsigned short)((((unsigned long long)rng_u32() * 0x10000ULL) >> 32));
    ports[1] = (unsigned short)((((unsigned long long)rng_u32() * 0x10000ULL) >> 32));
    if (FUN_02025990(a0, &res) != 0) {
        return res;
    }
    flags[0] = 1;
    flags[1] = 1;
    for (pass = 0; pass < 3; pass++) {
        for (i = 0; i < 2; i++) {
            if (flags[i] != 0) {
                res = FUN_02025a2c(a0, DAT_021070b4[i], ports[i]);
                if (res != 0 && res != -1) {
                    goto done;
                }
                if (res == -1) {
                    flags[i] = 0;
                }
            }
        }
    }
done:
    if (res == -1) {
        res = 0;
    }
    return res;
}
