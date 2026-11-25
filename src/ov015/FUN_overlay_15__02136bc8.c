// flags: -O4,s
typedef struct {
    unsigned short w[28];
    unsigned char flag : 1;
} TouchData;
extern TouchData *DAT_0213e908[];
int FUN_overlay_15__02136bc8(unsigned short *out) {
    TouchData *p;
    if ((*(unsigned short *)0x027fffa8 & 0x8000) >> 15)
        return 0;
    p = DAT_0213e908[1];
    if (!p->flag) {
        out[0] = p->w[22];
        out[1] = p->w[23];
        return 0;
    }
    out[0] = p->w[20];
    out[1] = p->w[21];
    return 1;
}
