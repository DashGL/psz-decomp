// flags: -O4,p
extern unsigned char *DAT_0213e860;
extern unsigned char DAT_0213a334[];
extern void FUN_overlay_15__021362f8(void *, unsigned int);
extern void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, const unsigned short *);
extern void FUN_overlay_15__02136368(void *);

void FUN_overlay_15__0212bd0c(void) {
    unsigned short rect[4] = {0, 0, 0, 0};
    unsigned short ch[2];
    int col, i;
    unsigned char *owner;
    rect[1] = 0x20;
    rect[2] = 0x0e;
    rect[3] = 0x10;
    FUN_overlay_15__021362f8(*(void **)DAT_0213e860, 0);
    ch[1] = 0;
    for (i = 0, col = 0; i < 32; i++, col++) {
        if (i == 16) {
            rect[1] = 0x31;
            col = 0;
        }
        owner = DAT_0213e860;
        if (owner[8 + i] == 0x20) {
            ch[0] = 0xe01d;
        } else {
            ch[0] = owner[8 + i];
        }
        rect[0] = DAT_0213a334[col];
        FUN_overlay_15__0213627c(*(void **)owner, rect[0], rect[1], rect[2], rect[3], 2, 1152, ch);
    }
    FUN_overlay_15__02136368(*(void **)DAT_0213e860);
}
