// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -noThumb
struct G {
    int f0;
    int f4;
};

extern char DAT_021a1aa0[];
extern struct G DAT_021183f8;
extern int FUN_02066ef4(void);

unsigned int FUN_02067748(unsigned int r0) {
    switch (r0) {
    case 0:
        return (unsigned int)DAT_021a1aa0;
    case 2:
        if (DAT_021183f8.f4 == 0 || (FUN_02066ef4() & 3) == 1) {
            return 0;
        }
        return 0x023e0000;
    case 3:
        return 0x01ff83c0;
    case 4:
        return 0x027e0080;
    case 5:
        return 0x027ff000;
    case 6:
        return 0x037f8000;
    default:
        return 0;
    }
}
