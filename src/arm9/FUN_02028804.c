// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int a);
extern int FUN_020015ac(void *a, void *b, int c);
extern void FUN_02065774(void *a, void *b, int c);
extern unsigned char DAT_02108a88[];

void FUN_02028804(unsigned char *param_1) {
    int i;
    int irq = FUN_020683d4();
    unsigned char *p = DAT_02108a88;
    i = 0;
    param_1[0x30] = 0;
    for (; i < 4; i++, p += 0x5c) {
        if (p[0x5a] != 0 && *(int *)(p + 0x54) == 0 && *(unsigned short *)(p + 0x58) == 0 &&
            FUN_020015ac(p, param_1 + 0x74, 0x20) == 0) {
            FUN_02065774(p + 0x20, param_1, 0x30);
            param_1[0x30] = 1;
            break;
        }
    }
    FUN_020683e8(irq);
}
