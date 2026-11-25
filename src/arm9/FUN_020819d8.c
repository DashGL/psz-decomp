// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long s64;
typedef signed char s8;
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
typedef struct {
    u8 pad00[0x1c];
    Vec pos;
    u16 pad28[2];
    u16 angle;
    u8 pad2e[0x16];
    s8 *f44;
    u8 *f48;
    u8 pad4c[8];
    u8 f54;
    u8 pad55[7];
    int count;
    u32 pad60;
    u16 a64[20];
} Self;
typedef struct {
    u8 pad00[0x14];
    struct Child *child;
} Slot;
typedef struct Child {
    u8 pad00[0x5c];
    Vec pos;
} Child;
extern char *DAT_02108c64;
extern short DAT_020ed83c[];
extern int FUN_0209af3c(int);
extern void *FUN_0204f3b8(void);
extern void FUN_020316e8(void *, void *);
extern Slot *FUN_0204f4c0(void *, void *, int);
#define FX_MUL(a, b) ((int)(((s64)(a) * (b) + 0x800LL) >> 12))

void FUN_020819d8(Self *s) {
    int halfHigh, halfLow, i;
    u8 key[4];
    if (!((*s->f48 & 8) ? E1 : E0) || ((*s->f48 & 4) ? E1 : E0)) {
        return;
    }
    s->count = FUN_0209af3c(s->f44[9]);
    halfHigh = s->count / 2 + s->count % 2;
    halfLow = s->count / 2 - 1;
    FUN_020316e8(key, DAT_02108c64 + 20);
    for (i = 0; i < s->count; i++) {
        Slot *slot = FUN_0204f4c0(FUN_0204f3b8(), key, s->f54 - i);
        if (slot && slot->child) {
            Child *child = slot->child;
            Vec p = s->pos;
            int count = s->count;
            if (count > 7) {
                if (i < halfLow) {
                    int step = (65536 / halfLow) * (i + 1);
                    u16 angle = (u16)(step + s->angle);
                    if (angle > 49152) {
                        angle = (u16)(angle - 49152);
                    } else {
                        angle = (u16)(angle + 16384);
                    }
                    { int v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2 + 1] * 328 + 0x800LL) >> 12); int x = v * 22; x += p.x; p.x = x; v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2] * 328 + 0x800LL) >> 12); int z = v * 22; z += p.z; p.z = z; }
                } else {
                    int step = (65536 / (halfHigh + 1)) * (i + 1);
                    u16 angle = (u16)(step + s->angle);
                    { int v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2 + 1] * 451 + 0x800LL) >> 12); int x = v * 27; x += p.x; p.x = x; v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2] * 451 + 0x800LL) >> 12); int z = v * 27; z += p.z; p.z = z; }
                }
            } else {
                u16 angle = (u16)(65536 - s->angle);
                if (count != 1) {
                    int step = (65536 / count) * (i + 1);
                    angle = (u16)(step + s->angle);
                }
                { int v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2 + 1] * 328 + 0x800LL) >> 12); int x = v * 22; x += p.x; p.x = x; v = (int)(((s64)DAT_020ed83c[((int)angle >> 4) * 2] * 328 + 0x800LL) >> 12); int z = v * 22; z += p.z; p.z = z; }
            }
            child->pos = p;
        }
        s->a64[i] = 0;
    }
    *s->f48 |= 4;
}
