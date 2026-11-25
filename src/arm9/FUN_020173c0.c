// flags: -O4,p -noThumb
#pragma opt_common_subs off
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct { u8 *pixels; u32 width; u32 height; } Header;
typedef struct { Header h; u8 depth; u8 pad[3]; u32 pitch; } Canvas173c0;
typedef struct { const u8 *metrics; const u8 *pixels; } Glyph173c0;
typedef struct { u8 *destination; const u8 *source; int x, y, width, height; u32 strideBits, inputBits, outputBits, palette; } Blit173c0;
extern void FUN_02017180(Blit173c0 *);

void FUN_020173c0(const Canvas173c0 *canvas, void **font, int x, int y, u32 palette, const Glyph173c0 *glyph) {
        int tileBytes = (canvas->depth * 64) / 8;
    u32 glyphWidth = glyph->metrics[1];
    u32 width = canvas->h.width;
    u32 height = canvas->h.height;
    u8 *charBase = canvas->h.pixels;
    const u8 *info = *(const u8 **)((u8 *)font[0] + 8);
    u32 glyphHeight = info[1];
    u32 left, top, right, bottom, columns, rows;
    int sumX, sumY, currentX, endX, endY;
    Blit173c0 blit;
    u8 *pChar;
    u32 pitch;
    int rowSkip;
    if (glyphWidth == 0) return;
    sumX = x + (int)glyphWidth;
    if (sumX < 0) return;
    sumY = y + (int)glyphHeight;
    if (sumY < 0) return;
    left = (x <= 0) ? 0 : ((u32)x >> 3);
    top = (y <= 0) ? 0 : ((u32)y >> 3);
    right = (((u32)(sumX + 7) >> 3) < width) ? ((u32)(sumX + 7) >> 3) : width;
    bottom = (((u32)(sumY + 7) >> 3) < height) ? ((u32)(sumY + 7) >> 3) : height;
    columns = right - left;
    rows = bottom - top;
    if ((int)columns < 0 || (int)rows < 0) return;
        pitch = canvas->pitch;
    pChar = charBase + tileBytes * (int)(pitch * top + left);
    rowSkip = tileBytes * (int)(pitch - columns);
    if (x >= 0) x &= 7;
    if (y >= 0) y &= 7;
    endX = x - (int)(columns << 3);
    endY = y - (int)(rows << 3);
    blit.source = glyph->pixels;
    blit.width = (int)glyphWidth;
    blit.height = (int)glyphHeight;
    blit.palette = palette - 1;
    {
        u8 bpp = (*(const u8 **)((u8 *)font[0] + 8))[6];
        blit.inputBits = bpp;
        blit.outputBits = canvas->depth;
        blit.strideBits = bpp * (*(const u8 **)((u8 *)font[0] + 8))[0];
    }
    for (; y > endY; y -= 8) {
        blit.y = y;
        for (currentX = x; currentX > endX; currentX -= 8) {
            blit.destination = pChar;
            blit.x = currentX;
            FUN_02017180(&blit);
            pChar += tileBytes;
        }
        pChar += rowSkip;
    }
}
