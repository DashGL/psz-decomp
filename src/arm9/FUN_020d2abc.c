// FUN_020d2abc @ 0x020d2abc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020d2abc @ 0x020d2abc (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern const char D_020fe82c[];
extern const char D_020fe848[];
extern const char D_020fe800[];

struct Buf {
    char *ptr;
    int cap;
    int len;
};

void FUN_020d2abc(struct Buf *b, char c) {
    if (b->len >= b->cap) {
        FUN_02000edc(D_020fe82c, D_020fe848, D_020fe800, 0x23);
    }
    b->ptr[b->len++] = c;
}
