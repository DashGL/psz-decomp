// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p
struct Slot9830 {
    void *buf;
    int f4;
    int f8;
    int cur;
    int f10;
    int total;
    int f18;
    unsigned char active;
};

extern struct Slot9830 *FUN_020e9bd4(void *);
extern int FUN_020e97bc(void *, int);
extern void FUN_020e9984(void *, int, int);
extern void FUN_020e9c0c(void *, void *, int, int);
extern int FUN_020e9e80(void *);
extern unsigned char *DAT_0211e5e4;

int FUN_020e9830(unsigned short p0, void *p1, void *p2, int p3) {
    unsigned char hdr[8];
    struct Slot9830 *s = FUN_020e9bd4(p1);
    int chunk;
    int total;

    if (FUN_020e97bc(p1, p0) == 0) {
        return 0;
    }
    s->active = 1;
    s->buf = p2;
    s->cur = 0;
    s->total = p3;
    FUN_020e9984(hdr, p0, p3);
    FUN_020e9c0c(p1, hdr, 8, 1);
    chunk = *(unsigned short *)(DAT_0211e5e4 + 0x610);
    if (p3 <= chunk) {
        chunk = p3;
    }
    if (chunk > FUN_020e9e80(p1)) {
        return 1;
    }
    FUN_020e9c0c(p1, p2, chunk, 1);
    s->cur += chunk;
    total = s->total;
    if (s->cur == total) {
        void (*cb)(int, void *);
        s->active = 0;
        s->buf = 0;
        s->cur = 0;
        s->total = 0;
        cb = *(void (**)(int, void *))(DAT_0211e5e4 + 0x600);
        if (cb != 0 && p0 == 1) {
            cb(total, p1);
        }
    }
    return 1;
}
