// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *FUN_02021904(unsigned int *);
extern void FUN_02023c50(char *, unsigned int);
extern void FUN_02022678(char *, unsigned int);
extern void FUN_020219c4(void);
void FUN_02023e14(void) {
    unsigned int sp0;
    while (1) {
        char *r0 = FUN_02021904(&sp0);
        if (sp0 > 0x22) {
            unsigned short r2 = *(unsigned short *)(r0 + 0xc);
            switch ((unsigned short)((r2 >> 8) | (r2 << 8))) {
            case 0x800:
                FUN_02023c50(r0 + 0xe, sp0 - 0xe);
                break;
            case 0x806:
                FUN_02022678(r0 + 0xe, sp0 - 0xe);
                break;
            }
        }
        FUN_020219c4();
    }
}
