// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -O4,p
struct S_dbc54 {
    unsigned char pad[0xd0c];
    unsigned char b0 : 6;
    unsigned char b6 : 2;
    unsigned char d0d;
    unsigned char d0e;
    unsigned char pad2[4];
    unsigned char d13;
};
extern struct S_dbc54 *FUN_020dac74(int);
extern int FUN_0202e358(void);
extern void FUN_020dbddc(int);
extern void FUN_0202dd84(void);
extern void FUN_0202e02c(void);
extern void FUN_0202e148(void);
extern void FUN_020dad18(int);

int FUN_020dbc54(void) {
    struct S_dbc54 *r5 = FUN_020dac74(0x10);
    int r4 = 9;
    switch (FUN_0202e358()) {
    case 3:
        r4 = r5->d0e;
        if (r5->b6 == 1) {
            *((unsigned char *)r5 + (r5->d13 << 2) + 0x444) = 0;
            r4 = 7;
        } else if ((unsigned int)r4 >= 3 && (unsigned int)r4 <= 5) {
            FUN_020dbddc(r4);
        }
        break;
    case 6:
        FUN_0202dd84();
        break;
    case 9:
        FUN_0202e02c();
        break;
    case 12:
        FUN_0202e148();
        FUN_020dad18(4);
        r4 = 0x11;
        break;
    case 11:
        FUN_020dad18(0);
        r4 = 0x11;
        break;
    }
    return r4;
}
