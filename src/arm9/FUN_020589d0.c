// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sub589d0 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
    int f10;
    char f14[1];
};
struct Obj589d0 {
    int f0;
    int f4;
    int f8;
    unsigned char pad0c[0x1a];
    unsigned short f26;
    int f28;
    int f2c;
    struct Sub589d0 *f30;
    int f34;
};
extern int FUN_020587ec(void *, void *, int);

int FUN_020589d0(struct Obj589d0 *self) {
    struct Sub589d0 *sub = self->f30;
    int ctx[2];
    unsigned char hdr;
    unsigned short id;
    int res;

    ctx[0] = self->f8;
    ctx[1] = self->f28;
    res = FUN_020587ec(ctx, &hdr, 1);
    if (res != 0) {
        return res;
    }
    sub->f10 = hdr & 0x7f;
    sub->fc = ((int)hdr >> 7) & 1;
    if (sub->f10 == 0) {
        return 1;
    }
    if (self->f34 == 0) {
        res = FUN_020587ec(ctx, sub->f14, sub->f10);
        if (res != 0) {
            return res;
        }
        sub->f14[sub->f10] = 0;
    } else {
        ctx[1] += sub->f10;
    }
    if (sub->fc != 0) {
        res = FUN_020587ec(ctx, &id, 2);
        if (res != 0) {
            return res;
        }
        sub->f0 = self->f8;
        sub->f4 = id & 0xfff;
        sub->f6 = 0;
        sub->f8 = 0;
    } else {
        sub->f0 = self->f8;
        *(int *)&sub->f4 = self->f26;
        self->f26++;
    }
    self->f28 = ctx[1];
    return res;
}
