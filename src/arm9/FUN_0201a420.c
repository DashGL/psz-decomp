// FUN_0201a420 @ 0x0201a420 (0xcc, arm) - ported from FUN_0201fae0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void FUN_0201c9d4(u32, void *, u32);

struct S {
    u8 *f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
    void (*f18)(struct S *);
    u8 pad[0x8f - 0x1c];
    u8 f8f;
};

void FUN_0201a420(struct S *s) {
    if ((s->f8 & 0x200) == 0 && (s->f8 & 1) != 0) {
        int state = (s->f18 != 0) ? s->f8f : 0;
        u32 skip;
        if (state == 1) {
            s->f8 &= ~0x40u;
            s->f18(s);
            state = (s->f18 != 0) ? s->f8f : 0;
            skip = s->f8 & 0x40;
        } else {
            skip = 0;
        }
        if (skip == 0) {
            u32 val = s->f0[1];
            if ((s->f8 & 0x100) == 0) {
                FUN_0201c9d4(0x14, &val, 1);
            }
        }
        if (state == 3) {
            s->f8 &= ~0x40u;
            s->f18(s);
        }
    }
    s->f0 += 2;
}
