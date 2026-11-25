// flags: -O4,p
extern void FUN_0205fdd8(unsigned int *, unsigned int);
extern unsigned int FUN_0205fea4(unsigned int *, unsigned char *, unsigned int);
int FUN_020dd6e8(unsigned char *self) {
    unsigned int table[256];
    unsigned int crc;
    FUN_0205fdd8(table, 0xedb88320u);
    crc = FUN_0205fea4(table, self, 0x3c);
    if (crc != *(unsigned int *)(self + 0x3c)) {
        return 0;
    }
    return 1;
}
