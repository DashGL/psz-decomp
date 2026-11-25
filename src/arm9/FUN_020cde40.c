// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020cb184(void *, void *, void *);
extern void FUN_020cb1a0(void *, void *, int);
extern char DAT_020fdd48[];
extern char DAT_020fdab8[];
extern char DAT_020fdd60[];
extern char DAT_020fdc00[];
int FUN_020cde40(char **a, int b, int c) {
    char *r4 = *a;
    FUN_020cb184(a, r4 + 0x210, DAT_020fdd48);
    FUN_020cb1a0(a, r4 + 0x210, *(int *)(r4 + 0x198));
    FUN_020cb184(a, r4 + 0x210, DAT_020fdab8);
    FUN_020cb1a0(a, r4 + 0x210, b);
    FUN_020cb184(a, r4 + 0x210, DAT_020fdd60);
    FUN_020cb1a0(a, r4 + 0x210, c);
    FUN_020cb184(a, r4 + 0x210, DAT_020fdc00);
    return 0;
}
