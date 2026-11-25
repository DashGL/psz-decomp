// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020dac74(int);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020dc2ac(const void *, const void *, int, int);
extern const char DAT_020ec174[];
extern const char DAT_020ec17c[];

void FUN_020dbddc(int param_1) {
    char *r4 = FUN_020dac74(0x10);
    unsigned long long t;
    switch (param_1) {
    case 3:
        t = FUN_02067e0c();
        *(unsigned long long *)(r4 + 0xcb0) = t;
        FUN_020dc2ac(DAT_020ec174, DAT_020ec17c, r4[0xd11], 0x200000);
        break;
    case 4:
        t = FUN_02067e0c();
        *(unsigned long long *)(r4 + 0xcb0) = t;
        {
            int idx = (unsigned char)r4[0xd0f];
            FUN_020dc2ac(r4 + 0x474 + idx * 0xc0, r4 + 0x47c + idx * 0xc0, *(unsigned short *)(r4 + 0x4a6 + idx * 0xc0) - 1, 0x300000);
        }
        break;
    case 5:
        t = FUN_02067e0c();
        *(unsigned long long *)(r4 + 0xcb0) = t;
        {
            int idx = (unsigned char)r4[0xd0f];
            FUN_020dc2ac(DAT_020ec174, r4 + 0x304 + idx * 0x24, r4[0xd11], 0x300000);
        }
        break;
    }
}
