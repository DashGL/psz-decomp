// flags: -O4,s
struct Input { unsigned short w[28]; unsigned char b0:1, b1:1, b2:1, b3:1, rest:4; };
struct Mgr { void *f0; struct Input *input; };
extern struct Mgr DAT_0213e908;
int FUN_overlay_15__02136b28(const unsigned short *rect) {
    struct Input *input;
    unsigned int x, y;
    if ((*(volatile unsigned short *)0x027fffa8 & 0x8000) >> 15) return 0;
    input = DAT_0213e908.input;
    if (!input->b3) return 0;
    x = input->w[20];
    if (rect[0] > x) return 0;
    if (rect[2] < x) return 0;
    y = input->w[21];
    if (rect[1] > y) return 0;
    return rect[3] >= y;
}
