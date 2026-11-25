// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x100, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0205cfdc(unsigned short);

struct State_0205d474 {
    unsigned short f0;
    unsigned short pad[6];
    unsigned short fe;
};
extern struct State_0205d474 DAT_0211259c;

void FUN_0205d474(int arg0) {
    DAT_0211259c.f0 = (DAT_0211259c.f0 | DAT_0211259c.fe) & ~arg0;
    DAT_0211259c.fe = arg0;
    switch (arg0) {
    case 0x10:
        *(volatile unsigned int *)0x04000000 |= 0x40000000U;
        *(volatile unsigned char *)0x04000244 = 0x84;
        break;
    case 0x40:
        *(volatile unsigned int *)0x04000000 |= 0x40000000U;
        *(volatile unsigned char *)0x04000246 = 0x8c;
        break;
    case 0x60:
        *(volatile unsigned char *)0x04000246 = 0x8c;
    case 0x20:
        *(volatile unsigned char *)0x04000245 = 0x84;
        *(volatile unsigned int *)0x04000000 |= 0x40000000U;
        break;
    case 0:
        *(volatile unsigned int *)0x04000000 &= ~0x40000000U;
        break;
    }
    FUN_0205cfdc(DAT_0211259c.f0);
}
