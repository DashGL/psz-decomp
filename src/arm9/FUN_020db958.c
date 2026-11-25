// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020dac74(int);
extern void FUN_02065510(int, char *, int);
extern unsigned char FUN_020dba0c(char *);
extern unsigned char FUN_020dbba8(char *);
extern unsigned char FUN_020dbc1c(char *);
extern unsigned char FUN_020dba54(char *);

int FUN_020db958(int a) {
    char *r4 = FUN_020dac74(0x10);
    switch (a) {
    case 0:
        FUN_02065510(0, r4 + 0x300, 0x144);
        *(unsigned char *)(r4 + 0xd10) = FUN_020dba0c(r4);
        break;
    case 1:
        *(unsigned char *)(r4 + 0xd10) = FUN_020dbba8(r4);
        *(unsigned char *)(r4 + 0xd0f) = FUN_020dbc1c(r4);
        break;
    case 2:
        FUN_02065510(0, r4 + 0x300, 0x144);
        *(unsigned char *)(r4 + 0xd0f) = 0;
        *(unsigned char *)(r4 + 0xd10) = FUN_020dba54(r4);
        break;
    }
    return *(unsigned char *)(r4 + 0xd10);
}
