// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,p
extern struct {
    char pad[0x20];
    int unk20;
} DAT_0211d094;
extern char DAT_020fe704[];
extern char DAT_0211d0c4[];
extern void FUN_02003da4(char *, const char *);
extern char *FUN_02003fa8(const char *, const char *);
extern int FUN_02003c70(const char *);

char *FUN_020d2110(const char *a, const char *b) {
    char sp0[256] = "\\";
    char *p;
    char *r2;
    int offset;
    char *r3;
    DAT_0211d094.unk20 ^= 1;
    FUN_02003da4(sp0, b);
    FUN_02003da4(sp0, DAT_020fe704);
    p = FUN_02003fa8(a, sp0);
    if (p == 0) {
        return 0;
    }
    r2 = p + FUN_02003c70(sp0);
    offset = DAT_0211d094.unk20 << 8;
    r3 = DAT_0211d0c4 + offset;
    while (*r2 != 0 && *r2 != 0x5c) {
        *r3++ = *r2++;
    }
    *r3 = 0;
    return DAT_0211d0c4 + offset;
}
