// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p
extern int *DAT_0211dcbc;
extern char DAT_020e1d75[];
extern char DAT_020e4641[];
extern char DAT_020e45a1[];
int FUN_020e0b68(int a);
int FUN_020d514c(int a, unsigned short b, int c);
int FUN_020d34b0(int *a, int b, int c, int d, const char *e);
int FUN_020e1838(int a);
void FUN_020d34f4(int a, const char *b);
void FUN_020d3750(int a, const char *b);

int FUN_020e1548(void) {
    if (*DAT_0211dcbc != 0) {
        return 0;
    }
    unsigned short v = (unsigned short)(FUN_020e0b68(0x4000) + 0xc000);
    int *p = DAT_0211dcbc;
    int r1 = FUN_020d514c(0, v, 0);
    int r4 = FUN_020d34b0(DAT_0211dcbc, r1, p[5], p[6], DAT_020e1d75);
    if (FUN_020e1838(r4) != 0) {
        return r4;
    }
    FUN_020d34f4(*DAT_0211dcbc, DAT_020e4641);
    FUN_020d3750(*DAT_0211dcbc, DAT_020e45a1);
    return r4;
}
