// flags: -O4,p
struct G_020e1508 {
    unsigned char pad[0x668];
    unsigned int mask;
};
extern struct G_020e1508 *DAT_0211dcbc;
extern int FUN_020e16cc(int);
int FUN_020e1508(int bit) {
    if (DAT_0211dcbc == 0) {
        return 0;
    }
    if (DAT_0211dcbc->mask & (1 << bit)) {
        return FUN_020e16cc(bit);
    }
    return 0;
}
