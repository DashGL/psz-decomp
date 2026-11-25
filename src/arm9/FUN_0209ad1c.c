// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
unsigned int FUN_0209ad1c(unsigned int limit) {
    unsigned long long n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    if (limit) {
        n = (n >> 32) * limit;
    }
    return (unsigned int)(n >> 32);
}
