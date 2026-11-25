// flags: -O4,p -noThumb
extern void FUN_0206557c(unsigned int, void *, int);
typedef struct { unsigned char *buf; int width; int height; unsigned char bpp; int pitch; } Surface;
static inline unsigned int MakeColor(int bpp, int cl) {
    unsigned int data = (unsigned int)cl;
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
void FUN_02017768(Surface *self, int cl) {
    unsigned int data = MakeColor(self->bpp, cl);
    int area = self->width * self->height;
    int size = area * ((self->bpp * 64) / 8);
    FUN_0206557c(data, self->buf, size);
}