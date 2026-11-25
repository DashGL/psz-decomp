// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern unsigned int FUN_02003c70(const char *);
extern void FUN_020c78b8(int);
extern int FUN_020c78d4(int, int);
extern void FUN_020c7af0(char *, int, unsigned int, int);

void FUN_020d1b84(const char *a, int b) {
    char buf[0x20];
    unsigned int len = FUN_02003c70(a);
    unsigned int i;
    FUN_020c78b8(0x79707367);
    for (i = 0; i < len; i++) {
        signed char r = FUN_020c78d4(0, 0xff);
        buf[i] = a[i] ^ r;
    }
    buf[i] = 0;
    FUN_020c7af0(buf, b, len, 1);
}
