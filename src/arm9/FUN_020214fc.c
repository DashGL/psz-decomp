// flags: -O4,s -noThumb
extern unsigned int DAT_02107054[];
int FUN_020214fc(unsigned int ip) {
    int res = 1;
    if (ip != 0xffffffffu && ip != 0x7f000001u) {
        unsigned int mask = DAT_02107054[7];
        if ((ip & mask) != (DAT_02107054[20] & mask)) res = 0;
    }
    return res;
}
