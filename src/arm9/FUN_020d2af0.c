// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern const char D_020fe854[];
extern const char D_020fe848[];
extern const char D_020fe814[];

struct Buf {
    unsigned char *data;
    int cap;
    int len;
};

void FUN_020d2af0(struct Buf *p, int a) {
    if (p->len + 2 > p->cap) {
        FUN_02000edc(D_020fe854, D_020fe848, D_020fe814, 0x2e);
    }
    p->data[p->len++] = a >> 8;
    p->data[p->len++] = a;
}
