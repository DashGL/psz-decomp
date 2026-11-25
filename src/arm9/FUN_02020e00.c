// flags: -O4,p -noThumb
extern unsigned int FUN_020207f0(void *, void *, unsigned int *, unsigned int, unsigned int);
extern unsigned int FUN_020209b4(void *, void *, unsigned int, unsigned int);
extern unsigned int DAT_02107040;
extern unsigned int DAT_02107044;

unsigned int FUN_02020e00(unsigned int size, unsigned int low_bank) {
    unsigned int address, result;
    unsigned int alloc_size;
    if (size == 0)
        alloc_size = 8;
    else
        alloc_size = (size + 7) & ~7u;
    if (alloc_size >= 0x7fff8) return 0;
    if (low_bank) {
        result = FUN_020207f0(&DAT_02107040, &DAT_02107044, &address, alloc_size, 8);
        if (address + alloc_size > 0x10000) {
            FUN_020209b4(&DAT_02107040, &DAT_02107044, address, alloc_size);
            return 0;
        }
    } else {
        result = FUN_020207f0(&DAT_02107040, &DAT_02107044, &address, alloc_size, 16);
    }
    if (!result) return 0;
    return ((alloc_size >> 3) << 16) | ((address << 13) >> 16);
}
