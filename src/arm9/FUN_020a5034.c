// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// flags: -O4,s
extern void *FUN_020ba918(unsigned int);
extern void *FUN_020a54fc(void *, int, int);
extern void *FUN_020a60f8(void *, int, int);
extern void FUN_020c2d94(int, int, int);
extern struct {
    int f0;
    int pad[5];
    int f18;
} DAT_0211a664;
extern int DAT_02101dd4;

void FUN_020a5034(void) {
    void *p;
    switch (DAT_0211a664.f0) {
    case 0:
        p = FUN_020ba918(0x1c34);
        if (p != 0) {
            FUN_020a54fc(p, 0, DAT_02101dd4);
        }
        break;
    case 2:
        p = FUN_020ba918(0x164);
        if (p != 0) {
            FUN_020a60f8(p, DAT_02101dd4, 2);
        }
        break;
    case 1:
        p = FUN_020ba918(0x164);
        if (p != 0) {
            FUN_020a60f8(p, DAT_02101dd4, 0);
        }
        break;
    case 3:
        p = FUN_020ba918(0x164);
        if (p != 0) {
            FUN_020a60f8(p, DAT_02101dd4, 1);
        }
        break;
    case 4:
        p = FUN_020ba918(0x1c34);
        if (p != 0) {
            FUN_020a54fc(p, 1, DAT_02101dd4);
        }
        break;
    case 5:
        p = FUN_020ba918(0x1c34);
        if (p != 0) {
            FUN_020a54fc(p, 2, DAT_02101dd4);
        }
        break;
    case 6:
        p = FUN_020ba918(0x164);
        if (p != 0) {
            FUN_020a60f8(p, DAT_02101dd4, 3);
        }
        break;
    case 7:
        p = FUN_020ba918(0x1c34);
        if (p != 0) {
            FUN_020a54fc(p, 3, DAT_02101dd4);
        }
        break;
    }
    FUN_020c2d94(2, 1, 0);
    DAT_0211a664.f18 = 0;
}
