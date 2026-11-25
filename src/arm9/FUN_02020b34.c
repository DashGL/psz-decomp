// flags: -O4,p -noThumb
extern unsigned int DAT_02107024;
extern unsigned int DAT_02107028;
extern unsigned int DAT_0210702c;
extern int FUN_020209b4(void *, void *, unsigned int, unsigned int);

int FUN_02020b34(unsigned int key) {
    unsigned int addr = (key & 0xffffu) << 3;
    unsigned int size = ((key & 0x7fff0000u) >> 16) << 4;
    unsigned int flag = (key & 0x80000000u) >> 31;
    if (size != 0) {
        int res;
        if (flag != 0) {
            res = FUN_020209b4(&DAT_02107028, &DAT_0210702c, addr, size);
        } else {
            res = FUN_020209b4(&DAT_02107024, &DAT_0210702c, addr, size);
        }
        if (res != 0) return 0; return 1;
    }
    return 2;
}
