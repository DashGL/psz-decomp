// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02068728(void);

void FUN_020650f4(int skip_chan, unsigned int mode) {
    int i;
    for (i = 0; i < 3; i++) {
        if (i != skip_chan) {
            unsigned int v = *(volatile unsigned int *)(0x040000b8 + i * 0xc);
            if ((v & 0x80000000u) != 0) {
                unsigned int m = v & 0x38000000u;
                if (m != mode && !(m == 0x08000000u && mode == 0x10000000u) && !(m == 0x10000000u && mode == 0x08000000u)) {
                    if (m == 0x18000000u || m == 0x20000000u || m == 0x28000000u || m == 0x30000000u || m == 0x38000000u || m == 0x08000000u || m == 0x10000000u) {
                        FUN_02068728();
                    }
                }
            }
        }
    }
}
