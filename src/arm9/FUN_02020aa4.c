// flags: -O4,p -noThumb
extern int DAT_02107024;
extern int DAT_02107028;
extern int DAT_0210702c;
extern int FUN_020207dc(void *, void *, unsigned int *, unsigned int);
unsigned int FUN_02020aa4(unsigned int size, unsigned int kind) {
    unsigned int address;
    unsigned int aligned;
    int ok;
    if (size == 0) aligned = 16;
    else aligned = (size + 15) & ~15u;
    if (aligned >= 0x7fff0) return 0;
    if (kind != 0) ok = FUN_020207dc(&DAT_02107028, &DAT_0210702c, &address, aligned);
    else ok = FUN_020207dc(&DAT_02107024, &DAT_0210702c, &address, aligned);
    if (!ok) return 0;
    return ((aligned >> 4) << 16) | ((address << 13) >> 16) | (kind << 31);
}
