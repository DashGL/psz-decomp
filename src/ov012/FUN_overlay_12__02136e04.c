//cpp
// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Header4 { u8 b[4]; };
struct Draw { u16 a, b, c, pad; int x, y; };

struct Def {
    u32 stat1 : 12;
    u32 stat1_hi : 20;
    u8 pad4[2];
    signed char f6;
    u8 f7;
    u16 kind : 6;
    u16 kind_hi : 10;
    u16 stat2;
};

struct Panel {
    u8 pad0[0x48];
    void *f48;
    u8 pad4C[0x13C - 0x4C];
    Header4 header;
    u8 pad140[0x154 - 0x140];
    int f154;
    u8 pad158[0x168 - 0x158];
    int f168;
};

extern "C" {
Def *FUN_02084568(Header4 *);
void FUN_02071d0c(void *);
void FUN_02090b44(void *);
void *FUN_02079114(void);
void *FUN_02077f3c(void);
void *FUN_02078038(void *);
void FUN_overlay_12__02137578(void *, int, int, int, int);
void FUN_020c32b4(Draw *, void *);
void FUN_020c331c(int, int, int, void *);
void FUN_0207920c(void *, int, int, int, u16, int, int);
int FUN_020848e0(int, int);
void FUN_overlay_12__02137420(void *);
void FUN_overlay_12__02137508(void *, int);
}

extern "C" void FUN_overlay_12__02136e04(Panel *self) {
    Draw d;
    Header4 header;
    void *digits;
    int offset;
    int value;
    Header4 *pHeader;
    Def *def;
    int mode;
    int icon;

    header = self->header;
    pHeader = &header;
    def = FUN_02084568(pHeader);
    if (!def) {
        return;
    }

    FUN_02071d0c(&d);
    FUN_02090b44(&d);
    digits = FUN_02079114();

    if ((self->f168 != 0 || self->f154 != 0) ? 1 : 0) {
        FUN_overlay_12__02137578(self, 8, pHeader->b[1] - 1, 0, 0);
    }

    {
        int v = pHeader->b[1];
        if ((v >= 14 && v <= 16) ? 1 : 0) {
            d.a = 0x33;
        } else {
            d.a = 0x2f;
        }
    }
    d.x = 0xb0000;
    d.y = 0x107000;
    FUN_020c32b4(&d, self->f48);

    FUN_0207920c(digits, 0xd8000, 0x113000, 2, 4, def->stat1, 0);
    FUN_020c331c(0x32, 0xb0000, 0x11f000, self->f48);
    FUN_0207920c(digits, 0xd8000, 0x12b000, 2, 4, def->stat2 & 0x7ff, 0);

    mode = 0;
    icon = 0xff;
    value = FUN_020848e0(def->kind, def->f6);
    offset = 0;

    switch (def->kind) {
    case 2:
        mode = 1;
        icon = 0x30;
        break;
    case 3:
        mode = 1;
        icon = 0x31;
        break;
    case 5:
        mode = 1;
        icon = 0x33;
        break;
    case 6:
        mode = 2;
        offset = 0x19000;
        icon = 0x40;
        break;
    case 7:
        mode = 2;
        offset = 0x14000;
        icon = 0x41;
        break;
    case 8:
        mode = 2;
        offset = 0x28000;
        icon = 0x42;
        break;
    case 9:
        mode = 2;
        offset = 0x1e000;
        icon = 0x43;
        break;
    case 10:
        mode = 2;
        offset = 0x19000;
        icon = 0x44;
        break;
    case 41:
    case 42:
    case 43:
        mode = 3;
        break;
    }

    switch (mode) {
    case 1:
        FUN_020c331c(icon, 0xb0000, 0x137000, self->f48);
        FUN_0207920c(digits, 0xd8000, 0x143000, 2, 4, value, 0);
        break;
    case 2:
        FUN_020c331c(icon, 0xb0000, 0x137000, self->f48);
        FUN_020c331c(0x4a, offset + 0xb0000, 0x137000, self->f48);
        FUN_0207920c(digits, 0xd8000, 0x143000, 2, 3, value, 0);
        FUN_020c331c(2, 0xf0000, 0x143000, FUN_02078038(FUN_02077f3c()));
        break;
    case 3:
        FUN_020c331c(0x47, 0xb0000, 0x137000, self->f48);
        FUN_020c331c(0x48, 0xd8000, 0x137000, self->f48);
        FUN_0207920c(digits, 0xd8000, 0x143000, 2, 3, value, 0);
        FUN_020c331c(2, 0xf0000, 0x143000, FUN_02078038(FUN_02077f3c()));
        break;
    }

    d.y = 0x14f000;
    d.a = 0x45;
    d.x = 0xb0000;
    FUN_020c32b4(&d, self->f48);
    d.a = 0x21;
    d.x = 0xb0000;
    FUN_020c32b4(&d, self->f48);
    FUN_0207920c(digits, 0xe0000, 0x14f000, 2, 3, def->f7, 0);
    FUN_overlay_12__02137420(self);
    FUN_overlay_12__02137508(self, (def->stat2 >> 11) + 1);
}
