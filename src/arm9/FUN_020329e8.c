// flags: -O4,s
extern unsigned short DAT_0211a3b8;
extern void FUN_02078ae0(int);
extern void FUN_020324b0(void *);

void FUN_020329e8(char *s) {
    unsigned int set;
    DAT_0211a3b8 &= ~32;
    set = (DAT_0211a3b8 & 4) != 0;
    if (set) {
        DAT_0211a3b8 &= ~4;
        DAT_0211a3b8 |= 8;
    }
    set = (DAT_0211a3b8 & 16) != 0;
    if (set) {
        FUN_02078ae0(2);
        DAT_0211a3b8 &= ~16;
    }
    *(unsigned short *)(s + 4) |= 1024;
    FUN_020324b0(s + 108);
}
