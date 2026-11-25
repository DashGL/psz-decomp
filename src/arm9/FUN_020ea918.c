// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_020f603c;
extern int FUN_020ea194(void *);
extern int FUN_020015ac(const void *, const void *, int);
extern int FUN_020ea1ec(void *);
extern void FUN_020ea16c(int, unsigned int *);
extern int FUN_020ea1ac(void *, unsigned int *);

int FUN_020ea918(unsigned char *self) {
    unsigned int mask;
    if (self[0xe7] == 0xff) {
        return 1;
    }
    if (self[0xe7] > 2) {
        return 0;
    }
    if (!FUN_020ea194(self + 0x40)) {
        return 0;
    }
    if (FUN_020015ac(self + 0xc0, &DAT_020f603c, 4) != 0) {
        if (!FUN_020ea1ec(self + 0xc4)) {
            return 0;
        }
        if (self[0xd0] > 0x20) {
            return 0;
        }
        FUN_020ea16c(self[0xd0], &mask);
        if (!FUN_020ea1ac(self + 0xc0, &mask)) {
            return 0;
        }
    }
    if (FUN_020015ac(self + 0xc8, &DAT_020f603c, 4) != 0) {
        if (!FUN_020ea1ec(self + 0xc8) && !FUN_020ea1ec(self + 0xcc)) {
            return 0;
        }
    }
    return 1;
}
