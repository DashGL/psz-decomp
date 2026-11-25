// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned short DAT_020f69cc[];
extern int FUN_020297e8(int, int, int, unsigned short);
unsigned short FUN_02029834(int a, int b, int c) {
    unsigned short *p = DAT_020f69cc;
    unsigned int i;
    for (i = 0; i < 2; i++) {
        if (FUN_020297e8(a, b, c, p[i]) != 0) {
            return DAT_020f69cc[i];
        }
    }
    return 0;
}
