//cpp
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;

struct Table24 {
    int f0;
    int pad[3];
    int f10;
    int f14;
};
struct Table8 {
    int id;
    u16 a0;
    u16 a1;
};
struct DrawBase {
    u16 a, b, c;
    
};
struct Draw : DrawBase {
    u32 x, y;
    
};

extern "C" {
extern Table24 DAT_0213bf68[];
extern Table8 DAT_0213bf50[];
extern void FUN_overlay_12__0212c978(int, int, int, int);
extern void FUN_overlay_12__02136ba0(int *, int *, const char *);
extern void FUN_overlay_12__0212c8f8(const void *, int, int, int);
extern const void *FUN_overlay_12__021362c4(int, int);
extern int FUN_overlay_12__02129c70(const void *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(Draw *, int);
}

struct Dialog {
    int m_00;
    int m_04;
    unsigned char pad0[0x38];
    int m_40;
    int m_44;
    int m_48;
    int m_4c;
    int m_50;
    unsigned char pad1[0xc];
    int m_60;
    unsigned char pad2[0x8];
    char text[1];

    inline int has_flag() const { return (m_04 & 1) ? 1 : 0; }
};

extern "C" void FUN_overlay_12__021369ac(Dialog *self) {
    if (self->m_60 > 0) {
        self->m_60--;
        return;
    }
    if (self->has_flag()) {
        FUN_overlay_12__0212c978(40, 53, 177, 89);
        return;
    }
    if (!self->m_44) {
        self->m_44 = 1;
        FUN_overlay_12__0212c978(40, 53, 177, 89);
        int x = 44;
        int y = 63;
        if (DAT_0213bf68[self->m_50].f0) {
            int width, height;
            FUN_overlay_12__02136ba0(&width, &height, self->text);
            x = 126 - width / 2;
            y = 98 - height / 2;
            if (DAT_0213bf68[self->m_50].f10) {
                y -= 5;
            } else if (DAT_0213bf68[self->m_50].f14) {
                y -= 10;
            }
        } else {
            int width, height;
            FUN_overlay_12__02136ba0(&width, &height, self->text);
            if (height >= 50) {
                y -= 4;
            }
        }
        FUN_overlay_12__0212c8f8(self->text, x, y, 2);
        if (DAT_0213bf68[self->m_50].f10) {
            const void *first = FUN_overlay_12__021362c4(2, 2);
            int width = FUN_overlay_12__02129c70(first);
            FUN_overlay_12__0212c8f8(first, 126 - width / 2, 122, 2);
        } else if (DAT_0213bf68[self->m_50].f14) {
            const void *first = FUN_overlay_12__021362c4(2, 0);
            const void *second = FUN_overlay_12__021362c4(2, 1);
            int width = FUN_overlay_12__02129c70(first);
            FUN_overlay_12__0212c8f8(first, 126 - width / 2, 110, 2);
            width = FUN_overlay_12__02129c70(second);
            FUN_overlay_12__0212c8f8(second, 126 - width / 2, 122, 2);
        }
    }
    int handle = FUN_overlay_12__02131ad0(DAT_0213bf50[self->m_4c].id);
    Draw d;
    d.a = 0; d.b = 0; d.c = 0;
    d.a = 0; d.b = 0; d.c = 0;
    d.y = 0; d.x = 0;
    d.x = 41U << 12;
    d.a = DAT_0213bf50[self->m_4c].a1;
    if (DAT_0213bf68[self->m_50].f10) {
        d.y = 121U << 12;
        FUN_020c32b4(&d, handle);
    } else if (DAT_0213bf68[self->m_50].f14) {
        d.y = ((u32)self->m_40 * 12 + 109) << 12;
        FUN_020c32b4(&d, handle);
    }
    d.x = 40U << 12;
    d.y = 49U << 12;
    d.a = DAT_0213bf50[self->m_4c].a0;
    FUN_020c32b4(&d, handle);
}
