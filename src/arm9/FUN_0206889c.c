// flags: -O4,p -noThumb
struct Shared_0206889c {
    unsigned char pad[0x388];
    unsigned int bits[4];
};
int FUN_0206889c(int bit, int idx) {
    struct Shared_0206889c *p = (struct Shared_0206889c *)0x027ffc00;
    return (p->bits[idx] & (1 << bit)) != 0;
}
