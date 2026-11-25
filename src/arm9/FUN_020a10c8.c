// flags: -O3,p
extern unsigned char DAT_0211a51c[];
extern int FUN_02084cc0(void *);
extern void *FUN_02086e3c(void);
extern unsigned char *FUN_0208724c(void *);
extern void FUN_020a13c8(void *, unsigned int, unsigned int);

static inline unsigned char *get_sub(unsigned char *p) {
    return p + 0x644;
}

void FUN_020a10c8(int player, int value, unsigned int slot) {
    if (value < 0 && player == FUN_02084cc0(DAT_0211a51c)) {
        unsigned char *sub = get_sub(FUN_0208724c(FUN_02086e3c()));
        FUN_020a13c8(sub + 0xec, -value, slot);
    }
}
