// flags: -O4,p -noThumb
extern int FUN_02066ef4(int);
extern int DAT_021183f8[];
extern unsigned char DAT_027e0000[];
extern unsigned char DAT_027e0080[];
extern unsigned char DAT_00000000[];
extern unsigned char DAT_00000800[];

unsigned int FUN_02067664(unsigned int a0) {
    switch (a0) {
    case 0:
        return 0x023e0000;
    case 2:
        if (DAT_021183f8[1] == 0 || (FUN_02066ef4(DAT_021183f8[1]) & 3) == 1) {
            return 0;
        }
        return 0x02700000;
    case 3:
        return 0x02000000;
    case 4: {
        unsigned int irqStackLo = (unsigned int)DAT_027e0000 + 0x3f80 - (unsigned int)DAT_00000800;
        unsigned int sysStackLo;
        if ((int)DAT_00000000 == 0) {
            sysStackLo = (unsigned int)DAT_027e0000;
            if (sysStackLo < (unsigned int)DAT_027e0080) {
                sysStackLo = (unsigned int)DAT_027e0080;
            }
        } else if ((int)DAT_00000000 < 0) {
            sysStackLo = (unsigned int)DAT_027e0080 - (int)DAT_00000000;
        } else {
            sysStackLo = irqStackLo - (int)DAT_00000000;
        }
        return sysStackLo;
    }
    case 5:
        return 0x027ff680;
    case 6:
        return 0x037f8000;
    default:
        return 0;
    }
}
