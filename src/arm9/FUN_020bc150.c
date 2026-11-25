// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,s
struct S10_tp {
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short valid;
};
struct S10_state {
    int f0;
    int f4;
    int f8;
    int fc;
    unsigned short f10;
    unsigned short f12;
    unsigned short f14;
    unsigned short f16;
};
extern struct S10_state DAT_0211b360;
extern unsigned short DAT_020fc964;
extern void FUN_0206af44(struct S10_tp *);

void FUN_020bc150(void) {
    struct S10_tp tp;
    if (((*(unsigned short *)0x027fffa8 & 0x8000) >> 15) == 1) {
        DAT_0211b360.f8 = 0;
        DAT_0211b360.f4 = 0;
        DAT_0211b360.f0 = 0;
        DAT_0211b360.fc = 0;
        DAT_020fc964 = 0x14;
        return;
    }
    FUN_0206af44(&tp);
    if (*(volatile unsigned short *)&tp.touch == 0 || tp.valid == 0) {
        DAT_0211b360.f10 = tp.x;
        DAT_0211b360.f12 = tp.y;
        DAT_0211b360.f14 = tp.touch;
        DAT_0211b360.f16 = tp.valid;
    }
    {
        int r1 = 0;
        unsigned short r2 = DAT_0211b360.f14;
        if (r2 != 0 && DAT_0211b360.f4 == 0) {
            r1 = 1;
        }
        DAT_0211b360.fc = r1;
        r1 = (r2 == 0 && DAT_0211b360.f4 != 0) ? 1 : 0;
        DAT_0211b360.f0 = r1;
        DAT_0211b360.f4 = r2;
        DAT_0211b360.f8 = DAT_0211b360.fc;
        if (r2 != 0) {
            DAT_020fc964--;
        } else {
            DAT_020fc964 = 0x14;
        }
        if (DAT_020fc964 == 0) {
            DAT_0211b360.f8 = 1;
            DAT_020fc964 = 4;
        }
    }
}
