// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fda68[];
extern char DAT_020fda4c[];
extern char DAT_020fda28[];
extern char DAT_020fda58[];
extern int FUN_020ccbf8(int, int, int);
extern void FUN_02000edc(char *, char *, char *, int);
extern void FUN_020d1b74(void *, char *);
int FUN_020cccd4(void *a, int b, int *c, int *d, int *e) {
    int r4 = (unsigned char)(b >> 24);
    int r5 = (unsigned char)(b >> 16);
    int r6 = (unsigned short)b;
    if (FUN_020ccbf8(r4, r5, r6) == 0) {
        FUN_02000edc(DAT_020fda68, DAT_020fda4c, DAT_020fda28, 0xb7);
    }
    if (FUN_020ccbf8(r4, r5, r6) == 0) {
        FUN_020d1b74(a, DAT_020fda58);
        return 2;
    }
    *c = r4;
    *d = r5;
    *e = r6;
    return 0;
}
