// flags: -O4,s
typedef struct {
    unsigned short glyph, a, b, pad;
    int x, y;
    int active;
} Marker;
typedef struct {
    int pad0[26];
    Marker markers[8];
    int pad1[130];
    int ox, oy;
} Map;
extern void *DAT_02108c64;
extern int FUN_02032854(void *);
void FUN_overlay_4__0212a294(Map *self, int x, int y, int index, int kind) {
    int angle = FUN_02032854(DAT_02108c64), dx, dy, originx, originy, bx, by;
    self->markers[index].active = 1;
    if (kind == 0) self->markers[index].glyph = 74;
    else if (kind == 1) self->markers[index].glyph = 75;
    else if (kind == 2) self->markers[index].glyph = 60;
    else self->markers[index].glyph = 61;
    originx = self->ox << 12;
    originy = self->oy << 12;
    dx = 0; dy = 0;
    switch (angle) {
    case 0: dx = x; dy = y; break;
    case 0x4000: dx = y; dy = -x; break;
    case 0x8000: dx = -x; dy = -y; break;
    case 0xc000: dx = -y; dy = x; break;
    }
    self->markers[index].x = originx + (int)(((long long)dx * 4681 + 2048) >> 12);
    self->markers[index].y = originy + (int)(((long long)dy * 4681 + 2048) >> 12);
    bx = self->markers[index].x + 131072 - originx;
    by = self->markers[index].y + 131072 - originy;
    if (bx < 12288 || bx > 253952 || by < 12288 || by > 253952) self->markers[index].active = 0;
}
