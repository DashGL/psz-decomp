// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,p -noThumb

struct Self2A104 {
    unsigned char pad0[0x2ec];
    unsigned char f2ec[0x5c];
    unsigned char f348[0x5c];
    unsigned char f3a4[0x58];
    unsigned char f3fc[0x58];
    unsigned char pad454[1];
    unsigned char f455;
};

extern void FUN_02065774(void *, void *, int);
extern void FUN_02029f4c(struct Self2A104 *, void *, int);
extern int FUN_020015ac(const void *, const void *, int);
extern void FUN_0202a028(struct Self2A104 *, void *, int);

void FUN_0202a104(struct Self2A104 *self, const unsigned char *digest) {
    unsigned char tmp[0x14];
    FUN_02065774(self->f3a4, self->f3fc, 0x58);
    FUN_02029f4c(self, tmp, 1);
    FUN_02065774(self->f3fc, self->f3a4, 0x58);
    if (FUN_020015ac(digest, tmp, 0x10) != 0) {
        self->f455 = 9;
        return;
    }
    FUN_02065774(self->f2ec, self->f348, 0x5c);
    FUN_0202a028(self, tmp, 1);
    FUN_02065774(self->f348, self->f2ec, 0x5c);
    if (FUN_020015ac(digest + 0x10, tmp, 0x14) != 0) {
        self->f455 = 9;
    } else {
        self->f455 = 6;
    }
}
