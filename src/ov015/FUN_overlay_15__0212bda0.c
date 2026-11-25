// flags: -O4,p
struct S_0212bda0 {
    unsigned int pad0;
    unsigned int *word;
    unsigned char pad8[0x21];
    unsigned char code;
};
extern struct S_0212bda0 *DAT_0213e860;
extern unsigned char DAT_0213a334[];
extern unsigned char DAT_0213a330[];
void FUN_overlay_15__0212bda0(void) {
    struct S_0212bda0 *p = DAT_0213e860;
    int code = p->code;
    int col = code & 0xF;
    int row = code >> 4;
    if ((unsigned int)code >= 0x20) {
        col = 0xF;
        row = 1;
    }
    *p->word = (*p->word & 0xfe00ff00U) | DAT_0213a330[row] | ((DAT_0213a334[col] & 0x1ffU) << 16);
}
