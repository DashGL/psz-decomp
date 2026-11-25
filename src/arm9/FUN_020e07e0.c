// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
struct S8 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
    unsigned char fc;
    unsigned char pad[3];
    unsigned int f10;
    char f14[0x20];
    char f34[0x20];
    int f54;
    char f58[8];
};
struct S8_wrap {
    int f0;
    struct S8 *f4;
};
extern struct S8_wrap DAT_0211dc9c;
extern int FUN_020dceb0(void);
extern void FUN_020dd0c8(void);
extern void FUN_020e0770(char *, char *, int, char *, int);
extern int FUN_020da920(void);
extern int FUN_0202e358(int);

void FUN_020e07e0(void) {
    struct S8 *p = DAT_0211dc9c.f4;
    if (p == 0) {
        return;
    }
    switch (p->f10) {
    case 1:
        p->f0 = 0;
        DAT_0211dc9c.f4->f10 = FUN_020dceb0();
        break;
    case 2:
        FUN_020dd0c8();
        p = DAT_0211dc9c.f4;
        FUN_020e0770(p->f14, p->f34, p->f54, p->f58, 8);
        DAT_0211dc9c.f4->f10 = 0;
        break;
    case 3:
        FUN_020dd0c8();
        DAT_0211dc9c.f4->f0 = -1;
        DAT_0211dc9c.f4->fc = 1;
    case 4:
        return;
    default:
        if (p->f4 == 2) {
            DAT_0211dc9c.f4->f0 = FUN_020da920();
        } else if (p->f4 == 4) {
            if (p->f6 != 0 && FUN_0202e358(p->f6) != 9) {
                DAT_0211dc9c.f4->f6 = 0;
                DAT_0211dc9c.f4->f4 = 6;
            }
        }
        break;
    }
}
