// flags: -O4,p -noThumb
extern unsigned int DAT_0210571c[];

void FUN_02019968(unsigned int *a, unsigned int *b, unsigned int *c, unsigned int *d) {
    if (a) *a = DAT_0210571c[0x28] & 255;
    if (b) *b = (DAT_0210571c[0x28] >> 8) & 255;
    if (c) *c = (DAT_0210571c[0x28] >> 16) & 255;
    if (d) *d = (DAT_0210571c[0x28] >> 24) & 255;
}
