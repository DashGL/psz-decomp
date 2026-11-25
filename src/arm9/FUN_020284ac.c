// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x174, exact bytes and relocation targets; argument/return contract corrected.
// Consumed return contract: notes/reference/resume2-upper-20261112/lower-return-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x174, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02028454(void);
extern void FUN_02028480(void);
extern int FUN_02025bc8(void *);

struct In_284ac {
    int f0;
    int f4;
    int f8;
    int fc;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
};

struct S_021088f4 {
    int f0;
    int f4;
    int f8;
    int fc;
    char pad[0x40 - 0x10];
    int f40;
    unsigned int f44;
    unsigned int f48;
    unsigned int f4c;
    unsigned int f50;
    unsigned int f54;
    void (*f58)(void);
    void (*f5c)(void);
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
};
extern struct S_021088f4 DAT_021088f4;

#define BSWAP(x) ((((x) >> 24) & 0xffu) | (((x) >> 8) & 0xff00u) | (((x) << 8) & 0xff0000u) | (((x) << 24) & 0xff000000u))

int FUN_020284ac(struct In_284ac *p0) {
    DAT_021088f4.f40 = (p0->fc == 1) ? 1 : 0;
    DAT_021088f4.f44 = BSWAP(p0->f10);
    DAT_021088f4.f48 = BSWAP(p0->f14);
    DAT_021088f4.f4c = BSWAP(p0->f18);
    DAT_021088f4.f50 = BSWAP(p0->f1c);
    DAT_021088f4.f54 = BSWAP(p0->f20);
    DAT_021088f4.f58 = FUN_02028454;
    DAT_021088f4.f5c = FUN_02028480;
    DAT_021088f4.fc = p0->f4;
    DAT_021088f4.f4 = p0->f8;
    DAT_021088f4.f60 = 0x40;
    DAT_021088f4.f70 = p0->f2c;
    DAT_021088f4.f74 = p0->f30;
    return FUN_02025bc8(&DAT_021088f4.f40);
}
