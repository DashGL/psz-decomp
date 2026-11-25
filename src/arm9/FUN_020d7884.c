// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020d7848(unsigned char *, int, unsigned int);
extern int FUN_020d77d4(unsigned char *, int, int, unsigned int, unsigned char *, int *);

void FUN_020d7884(unsigned char *a, int b, unsigned int c) {
    unsigned char sp8;
    int spc;
    int i;
    if (c < 1) {
        FUN_020d7848(a, b, c);
        return;
    }
    for (i = 0; i < 0x100; i++) {
        a[i] = i;
    }
    spc = 0;
    sp8 = 0;
    for (i = 0xff; i >= 0; i--) {
        int r0 = FUN_020d77d4(a, i, b, c, &sp8, &spc);
        unsigned char tmp = a[i];
        a[i] = a[r0];
        a[r0] = tmp;
    }
    a[0x100] = a[1];
    a[0x101] = a[3];
    a[0x102] = a[5];
    a[0x103] = a[7];
    a[0x104] = a[sp8];
    sp8 = 0;
    spc = 0;
}
