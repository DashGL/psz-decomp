// flags: -O4,s
#pragma thumb off
extern int FUN_0200376c(const char *, ...);
extern void FUN_02000cac(void);
#pragma thumb on
extern const char DAT_0213d230[];
unsigned int *FUN_overlay_12__0211edb8(unsigned int *self, unsigned int index, int enabled) {
    unsigned int mask;
    unsigned int word;
    if (index >= 258) {
        FUN_0200376c(DAT_0213d230);
        FUN_02000cac();
    }
    word = index >> 5;
    mask = 1U << (index & 31);
    if (enabled) {
        self[word] |= mask;
    } else {
        self[word] &= ~mask;
    }
    return self;
}
