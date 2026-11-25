// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0205cfdc(unsigned short);

struct S_0211259c {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short f0a;
};

extern struct S_0211259c DAT_0211259c;

void FUN_0205d7f8(unsigned short a0) {
    DAT_0211259c.f0 = (unsigned short)(~a0 & (DAT_0211259c.f0 | DAT_0211259c.f0a));
    DAT_0211259c.f0a = a0;
    switch (a0) {
    case 0:
        break;
    case 0x60:
        *(volatile unsigned char *)0x04000246 = 0x8b;
    case 0x20:
        *(volatile unsigned char *)0x04000245 = 0x83;
        break;
    case 0x40:
        *(volatile unsigned char *)0x04000246 = 0x83;
        break;
    case 0x70:
        *(volatile unsigned char *)0x04000246 = 0x9b;
    case 0x30:
        *(volatile unsigned char *)0x04000245 = 0x93;
    case 0x10:
        *(volatile unsigned char *)0x04000244 = 0x83;
        break;
    }
    FUN_0205cfdc(DAT_0211259c.f0);
}
