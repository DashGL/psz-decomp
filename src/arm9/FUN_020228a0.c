// flags: -O4,p -noThumb
// near: 23 byte diffs (0 bad relocs); codegen register coloring / instruction scheduling
extern int FUN_020683d4(void);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02066a94(int);
extern void FUN_020683e8(int);
extern int DAT_021181a0[];

void FUN_020228a0(unsigned short *arg0, unsigned short *arg1, int arg2) {
    unsigned char *sub;
    int irq = FUN_020683d4();
    unsigned char *cur = (unsigned char *)DAT_021181a0[2];
    while (cur != 0) {
        sub = *(unsigned char **)(cur + 0xa4);
        if (sub != 0 && *(int *)sub != 0) {
            if (sub[8] == 0xb
                && arg1[2] == (unsigned short)*(int *)sub
                && *(unsigned short *)(sub + 0xa) == arg1[3]
                && *(int *)(sub + 0x44) == 0) {
                if (*(unsigned int *)(sub + 0x1c) == (((unsigned int)(unsigned short)((arg0[6] >> 8) | (arg0[6] << 8)) << 16) | (unsigned short)((arg0[7] >> 8) | (arg0[7] << 8)))) {
                    unsigned int max_len = *(unsigned int *)(sub + 0x3c);
                    unsigned int len = arg2 - 8;
                    if (len > max_len) {
                        *(unsigned int *)(sub + 0x44) = max_len;
                    } else {
                        *(unsigned int *)(sub + 0x44) = len;
                    }
                    FUN_02065774(arg1 + 4, *(void **)(sub + 0x40), *(int *)(sub + 0x44));
                    if (*(int *)(sub + 4) == 3) {
                        *(int *)(sub + 4) = 0;
                        FUN_02066a94(*(int *)sub);
                    }
                    break;
                }
            }
        }
        cur = *(unsigned char **)(cur + 0x68);
    }
    FUN_020683e8(irq);
}
