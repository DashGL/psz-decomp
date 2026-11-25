// flags: -noThumb -O4,p
#pragma opt_strength_reduction off
extern unsigned int DAT_020f6700;
extern void FUN_020654b4(unsigned int, void *, unsigned int);
void FUN_0201d910(unsigned char *self, unsigned char *resource, unsigned char *model) {
    unsigned int i;
    unsigned short *offs;
    *(unsigned char **)(self + 8) = resource;
    *(unsigned int *)(self + 12) = DAT_020f6700;
    self[0x19] = model[0x17];
    FUN_020654b4(0, self + 0x1a, (unsigned int)self[0x19] * 2);
    offs = (unsigned short *)(resource + 0x14);
    for (i = 0; i < *(unsigned short *)(resource + 6); ++i) {
        unsigned int val = *(unsigned int *)(resource + offs[i]);
        *(unsigned short *)(self + 0x1a + 2 * i) = (unsigned short)((val >> 24) | 0x100);
    }
}
