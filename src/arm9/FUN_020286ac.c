// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern const char DAT_020f69b8[];
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02028730(unsigned int, unsigned char *);
extern void FUN_020662b4(char *, int, const char *, int, int, int, int);

char *FUN_020286ac(int a, const void *b, char *c, unsigned int d) {
    unsigned int val;
    unsigned char ip[4];
    if (a != 2) {
        return 0;
    }
    if (d < 0x10) {
        return 0;
    }
    FUN_02065774(b, &val, 4);
    FUN_02028730(val, ip);
    FUN_020662b4(c, 0x10, DAT_020f69b8, ip[3], ip[2], ip[1], ip[0]);
    return c;
}
