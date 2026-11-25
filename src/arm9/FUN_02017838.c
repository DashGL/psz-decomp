// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    int param;
} NNSG2dCharCanvas;
extern void FUN_02017048(void *, int, int, int, int, u32, int);
static inline u32 MakeColor(int bpp, int cl) {
    u32 data = (u32)cl;
    if (bpp == 4) {
        data |= data << 4;
        data |= data << 8;
        data |= data << 16;
    } else {
        data |= data << 8;
        data |= data << 16;
    }
    return data;
}
void FUN_02017838(const NNSG2dCharCanvas *pCC, int cl, int x, int y, int w, int h) {
    int bx, by, sx, sy, cw, ch;
    int x_end, y_end, bx_end; u8 *p;
    int by_end; u8 *pChar; int bx_start; int charSize; int lineBytes;
    u8 bpp;
    u32 color;
    x_end = x + w;
    y_end = y + h;
    bpp = pCC->dstBpp;
    color = MakeColor(bpp, cl);
    
    bx_start = x & ~7;
    by = y & ~7;
    bx_end = (x_end + 7) & ~7;
    by_end = (y_end + 7) & ~7;
    charSize = (bpp * 64) / 8;
    pChar = pCC->charBase + charSize * ((by / 8) * pCC->param + (bx_start / 8));
    lineBytes = pCC->param * charSize;
    for (; by < by_end; by += 8) {
        sy = (by < y) ? (y - by) : 0;
        ch = ((y_end - by > 8) ? 8 : (y_end - by)) - sy;
        p = pChar;
        for (bx = bx_start; bx < bx_end; bx += 8) {
            sx = (bx < x) ? (x - bx) : 0;
            cw = ((x_end - bx > 8) ? 8 : (x_end - bx)) - sx;
            FUN_02017048(p, sx, sy, cw, ch, color, bpp);
            p += charSize;
        }
        pChar += lineBytes;
    }
}
