// flags: -O4,p
extern unsigned char *DAT_0213e8e8;
void FUN_overlay_15__02135298(void) {
    int i;
    for (i = 0; i < 16; i++) {
        if (((unsigned int *)(DAT_0213e8e8 + 0x208))[i] != 0) {
            unsigned short *slot = (unsigned short *)(DAT_0213e8e8 + 0x100 + (unsigned int)i * 68);
            if (i == 1) {
                if (DAT_0213e8e8[0xa93] == 1) {
                    if (*slot != 16)
                        return;
                    (*(unsigned int *)(DAT_0213e8e8 + 0xa94))++;
                    if (!(*(unsigned int *)(DAT_0213e8e8 + 0xa94) & 1)) {
                        (*(unsigned short *)(DAT_0213e8e8 + 0x200))++;
                        if (*(unsigned short *)(DAT_0213e8e8 + 0x200) >= 36)
                            *(unsigned short *)(DAT_0213e8e8 + 0x200) = 0;
                    }
                } else {
                    *(unsigned short *)(DAT_0213e8e8 + 0x202) = 188;
                    if (*slot == 189) {
                        DAT_0213e8e8[0xa93] = 1;
                        *(unsigned short *)(DAT_0213e8e8 + 0x200) = 0;
                        *(unsigned int *)(DAT_0213e8e8 + 0xa94) = 0;
                    }
                }
            }
        }
    }
}
