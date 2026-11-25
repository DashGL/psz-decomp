// FUN_0201bdc0 @ 0x0201bdc0 (0xdc, arm) - ported from FUN_0202147c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void FUN_0201c920(void *, u32);

struct S {
    u8 *f0;
    u32 f4;
    u32 f8;
    u8 pad[0x34 - 0xc];
    void (*f34)(struct S *);
    u8 pad2[0x96 - 0x38];
    u8 f96;
};

void FUN_0201bdc0(struct S *s) {
    int state = (s->f34 != 0) ? s->f96 : 0;
    u32 skip;
    if (state == 1) {
        s->f8 &= ~0x40u;
        s->f34(s);
        state = (s->f34 != 0) ? s->f96 : 0;
        skip = s->f8 & 0x40;
    } else {
        skip = 0;
    }
    if ((s->f8 & 0x100) == 0 && skip == 0) {
        u8 *p = s->f0;
        u32 off = p[1] | (p[2] << 8) | (p[3] << 16) | (p[4] << 24);
        u32 arg = p[5] | (p[6] << 8) | (p[7] << 16) | (p[8] << 24);
        FUN_0201c920(p + off, arg);
    }
    if (state == 3) {
        s->f8 &= ~0x40u;
        s->f34(s);
    }
    s->f0 += 9;
}
