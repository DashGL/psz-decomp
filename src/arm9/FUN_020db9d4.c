// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern unsigned char *FUN_020dac74(int);
extern int FUN_02003f38(char *, const char *, int);
extern const char D_020f5f44[];

struct Bit {
    unsigned char v : 4;
};

int FUN_020db9d4(char *p) {
    struct Bit *b = (struct Bit *)(FUN_020dac74(0x10) + 0xd0c);
    if ((b->v == 0 || b->v == 6) && FUN_02003f38(p + 0xc, D_020f5f44, 8) == 0) {
        return 8;
    }
    return 0;
}
