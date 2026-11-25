// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02053464(int);
extern void FUN_020654dc(const void *, void *, int);

void FUN_020551e0(unsigned char *arg0) {
    unsigned char *p = *(unsigned char **)(arg0 + 0x1c);
    if (p == 0) {
        return;
    }
    if (*(unsigned short *)(arg0 + 2) == 0) {
        unsigned short cmd = *(unsigned short *)(arg0 + 4);
        switch (cmd) {
        case 0x15: {
            unsigned int len;
            int mask;
            unsigned short *q = *(unsigned short **)(arg0 + 0xc);
            len = *(unsigned short *)(arg0 + 0x10);
            mask = *q;
            {
                int bit = FUN_02053464(cmd);
                if (len != *(unsigned short *)(p + 0x814)) {
                    if (len > 0x200) {
                        len = 0x200;
                    }
                }
                if (len < 4) {
                    return;
                }
                if (mask & (1 << bit)) {
                    FUN_020654dc(q, p + (*(unsigned short *)(p + 0x808) << 9), len);
                    *(unsigned short *)(p + (*(unsigned short *)(p + 0x808) << 1) + 0x800) = (int)*(unsigned short *)(arg0 + 0x1a) >> 1;
                    *(unsigned short *)(p + 0x808) = (*(unsigned short *)(p + 0x808) + 1) & 3;
                }
            }
            break;
        }
        case 7:
        case 9:
        case 0x19:
        case 0x1a:
            break;
        default:
            return;
        }
    } else {
        *(unsigned short *)(p + 0x81c) = 5;
    }
}
