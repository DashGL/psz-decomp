// flags: -O4,s
struct Rect {
    unsigned short x, y, w, h;
};
extern unsigned char DAT_0213e88c;
extern struct Rect DAT_0213a536[];
extern void FUN_overlay_15__021254e0(unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_overlay_15__0212546c(unsigned int, unsigned int, unsigned int, unsigned int);
void FUN_overlay_15__0212f8c8(void) {
    unsigned int state = DAT_0213e88c;
    if (state < 4) {
        FUN_overlay_15__021254e0(DAT_0213a536[state].x, DAT_0213a536[state].w, DAT_0213a536[state].y, DAT_0213a536[state].h);
    } else {
        FUN_overlay_15__0212546c(0, DAT_0213a536[state].x, DAT_0213a536[state].w, DAT_0213a536[state].y);
    }
}
