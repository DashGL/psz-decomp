// flags: -noThumb -O4,p
extern unsigned int FUN_02012b70(unsigned int, unsigned int);
unsigned int FUN_02012a60(unsigned int self, unsigned int *out) {
    unsigned int p = FUN_02012b70(self, 0x43504f53);
    if (p != 0) {
        *out = p + 8;
        return 1;
    }
    *out = 0;
    return 0;
}
