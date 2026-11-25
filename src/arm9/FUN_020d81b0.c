// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fffe0[];
extern unsigned short DAT_020eba58[];
extern int FUN_02003e24(char *, char *);
extern int FUN_020d8664(void *);
extern char *FUN_020d8158(void *, char *, int);
extern int FUN_02005898(char *);
int FUN_020d81b0(void *a, char *b, int c) {
    if (a == 0) {
        return c;
    }
    if (FUN_02003e24(b, DAT_020fffe0) == 0) {
        return FUN_020d8664(a);
    }
    char *s = FUN_020d8158(a, b, 0);
    if (s == 0) {
        return c;
    }
    int ch = *(unsigned char *)(*s != '-' ? s : s + 1);
    if ((ch < 0 || ch >= 0x80 ? 0 : (DAT_020eba58[ch] & 8)) == 0) {
        return c;
    }
    return FUN_02005898(s);
}
