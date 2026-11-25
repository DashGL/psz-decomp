// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned char *FUN_02026454(unsigned char *, unsigned char *, unsigned char *);
extern unsigned char *FUN_0202642c(unsigned char *, unsigned char *, unsigned short);
extern unsigned char *DAT_0210888c;

unsigned char *FUN_02026330(unsigned char *arg0, unsigned char *arg1) {
    unsigned char *p = arg0 + 0x80;
    arg0[0x73] = *(signed char *)arg1;
    arg0[0x72] = *((signed char *)arg1 + 1);
    if (*(unsigned short *)(arg1 + 2) != 0) {
        unsigned char *base = p;
        *(unsigned char **)(arg0 + 0x64) = p;
        *(unsigned short *)(p + 0xfc) = *(unsigned short *)(arg1 + 4);
        p = FUN_02026454(p + 0x114, p, arg1 + 0x10);
        p = FUN_0202642c(p, arg0 + 0x3c, *(unsigned short *)(arg1 + 2));
        p = FUN_0202642c(p, arg0 + 0x50, *(unsigned short *)(arg1 + 8));
        *(unsigned short *)(base + 0x10a) = *(unsigned short *)(arg1 + 0xe);
        *(int *)(base + 0x110) = 0;
        *(int *)(base + 0x10c) = 0;
    }
    if (*(unsigned short *)(arg1 + 6) != 0) {
        unsigned char *base = p;
        *(unsigned char **)(arg0 + 0x68) = p;
        *(unsigned char **)(p + 0x10c) = arg0;
        p = FUN_02026454(p + 0x110, p, arg1 + 0x14);
        p = FUN_0202642c(p, arg0 + 0x48, *(unsigned short *)(arg1 + 6));
        p = FUN_0202642c(p, arg0 + 0x58, *(unsigned short *)(arg1 + 0xa));
        p = FUN_0202642c(p, base + 0xf8, *(unsigned short *)(arg1 + 0xc));
        *(int *)(base + 0x108) = 0;
        *(int *)(base + 0x104) = 0;
    } else {
        *(int *)(arg0 + 0x68) = *(int *)(DAT_0210888c + 0x68);
    }
    return p;
}
