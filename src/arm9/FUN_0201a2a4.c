// near: 149 diff words (0x184/0x17c bytes, bad_relocs=0) under 2.0/sp2p3 -O4,p -noThumb
// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

struct Sub4 {
    u8 pad0[0x18];
    void *f18;
    int (*f1c)(u32 *, void *, u8);
    u8 pad20[0x24];
    u32 f44[8];
};

struct S {
    u8 *f0;
    struct Sub4 *f4;
    u32 f8;
    u32 fc;
    u32 f10;
    void (*f14)(struct S *);
    u8 pad18[0x8e - 0x18];
    u8 f8e;
    u8 pad8f[0xac - 0x8f];
    u8 fac;
    u8 padad[0xb8 - 0xad];
    u32 *fb8;
    u8 padbc[0x178 - 0xbc];
    u32 f178;
};

void FUN_0201a2a4(struct S *s) {
    if ((s->f8 & 0x200) == 0) {
        u8 op = s->f0[1];
        u32 state;
        u32 skip;
        s->fac = op;
        s->f8 |= 4;
        s->fb8 = &s->f178;
        state = (s->f14 != 0) ? s->f8e : 0;
        if (state == 1) {
            s->f8 &= ~0x40u;
            s->f14(s);
            state = (s->f14 != 0) ? s->f8e : 0;
            skip = s->f8 & 0x40;
        } else {
            skip = 0;
        }
        if (skip == 0) {
            struct Sub4 *sub = s->f4;
            if (sub->f18 == 0 || (sub->f44[(u32)op >> 5] & (1 << (op & 0x1f))) == 0 || !sub->f1c(s->fb8, sub->f18, op)) {
                *s->fb8 = s->f0[2] & 1;
            }
        }
        if (state == 2) {
                s->f8 &= ~0x40u;
                s->f14(s);
                state = (s->f14 != 0) ? s->f8e : 0;
                skip = s->f8 & 0x40;
            } else {
                skip = 0;
            }
            if (skip == 0) {
                if (*s->fb8 != 0) {
                    s->f8 |= 1;
                } else {
                    s->f8 &= ~1u;
                }
            }
        if (state == 3) {
            s->f8 &= ~0x40u;
            s->f14(s);
        }
    }
    s->f0 += 3;
}
