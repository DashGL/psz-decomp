// flags: -O4,p
struct RngE0B68 {
    unsigned long long state;
    unsigned long long mul;
    unsigned long long add;
};
extern struct RngE0B68 DAT_0211dca4;
extern unsigned long long D_0211dca4;
extern void FUN_020684f4(void *);
extern unsigned long long FUN_02067e0c(void);

unsigned int FUN_020e0b68(unsigned int max) {
    if (DAT_0211dca4.state == 0 && DAT_0211dca4.mul == 0 && DAT_0211dca4.add == 0) {
        unsigned long long seed;
        FUN_020684f4(&seed);
        seed = ((seed >> 24) & 0x00ffffffULL) | (FUN_02067e0c() << 24);
        D_0211dca4 = seed;
        DAT_0211dca4.mul = 0x5d588b656c078965ULL;
        DAT_0211dca4.add = 0x00269ec3ULL;
    }
    DAT_0211dca4.state = DAT_0211dca4.mul * DAT_0211dca4.state + DAT_0211dca4.add;
    if (max == 0) {
        return (unsigned int)(DAT_0211dca4.state >> 32);
    }
    return (unsigned int)(((DAT_0211dca4.state >> 32) * (unsigned long long)max) >> 32);
}
