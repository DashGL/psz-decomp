// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    unsigned int f0;
    int f4;
    int f8;
    int fc;
} G_ba784;
extern G_ba784 DAT_0211b28c;
extern int DAT_0211b29c;
extern int DAT_0211b2ac;
extern unsigned int FUN_02067650(int);
extern unsigned int FUN_0206763c(int);
extern int FUN_02012168(unsigned int, unsigned int, int);
extern void FUN_02012890(void *, int, int);
void FUN_020ba784(void) {
    unsigned int r4 = (FUN_02067650(0) + 0xf) & ~0xfu;
    unsigned int r5 = (FUN_0206763c(0) & ~0xfu) - r4;
    int v;
    DAT_0211b28c.f0 = r5;
    v = FUN_02012168(r4, 0x6000, 0);
    DAT_0211b28c.f4 = v;
    FUN_02012890(&DAT_0211b29c, v, 0x10);
    v = FUN_02012168(r4 + 0x6000, r5 - 0x6000, 0);
    DAT_0211b28c.fc = v;
    FUN_02012890(&DAT_0211b2ac, v, 0x10);
}
