// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u32 baseW : 8;
    u32 baseH : 8;
    u32 pad : 16;
} Layout17558;

typedef struct {
    u8 *pixels;
    u32 width;
    u32 height;
    u8 depth;
    u8 pad[3];
    Layout17558 layout;
} Canvas17558;

typedef struct {
    const u8 *metrics;
    const u8 *pixels;
} Glyph17558;

typedef struct {
    u8 *destination;
    const u8 *source;
    int x, y, width, height;
    u32 strideBits, inputBits, outputBits, palette;
} Blit17558;

extern u32 FUN_02016f34(u32, u32, u32, u32, u32, u32);
extern void FUN_02017180(Blit17558 *);

void FUN_02017558(const Canvas17558 *canvas, void **font, int x, int y, u32 palette, const Glyph17558 *glyph) {
    u32 width, height;
    int tileBytes;
    u32 glyphWidth, glyphHeight;
    u32 left, top, right, bottom, columns, rows;
    int sumX, sumY, currentX, endX, endY;
    u32 tileX, tileY;
    Blit17558 blit;
    u8 *pixels;
    u32 ch2, cw2, baseH, baseW;
    Layout17558 layout;
    const u8 *info;

    tileBytes = (canvas->depth * 64) / 8;
    glyphWidth = glyph->metrics[1];
    info = *(const u8 **)((u8 *)font[0] + 8);
    width = canvas->width;
    height = canvas->height;
    glyphHeight = info[1];
    if (glyphWidth == 0) {
        return;
    }
    sumX = x + (int)glyphWidth;
    if (sumX < 0) {
        return;
    }
    sumY = y + (int)glyphHeight;
    if (sumY < 0) {
        return;
    }
    left = (x <= 0) ? 0 : ((u32)x >> 3);
    top = (y <= 0) ? 0 : ((u32)y >> 3);
    right = ((u32)(sumX + 7)) >> 3;
    if (right >= width) {
        right = width;
    }
    bottom = ((u32)(sumY + 7)) >> 3;
    if (bottom >= height) {
        bottom = height;
    }
    columns = right - left;
    rows = bottom - top;
    if ((int)columns < 0 || (int)rows < 0) {
        return;
    }
    pixels = canvas->pixels;
    if (x >= 0) {
        x &= 7;
    }
    if (y >= 0) {
        y &= 7;
    }
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
    layout = canvas->layout;
    cw2 = canvas->width;
    ch2 = canvas->height;
    baseW = layout.baseW;
    baseH = layout.baseH;
    for (tileY = top; y > endY; y -= 8, tileY++) {
        blit.y = y;
        for (tileX = left, currentX = x; currentX > endX; tileX++, currentX -= 8) {
            u32 index = FUN_02016f34(tileX, tileY, cw2, ch2, baseW, baseH);
            blit.destination = pixels + index * tileBytes;
            blit.x = currentX;
            FUN_02017180(&blit);
        }
    }
}
