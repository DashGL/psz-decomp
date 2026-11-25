// FUN_020bd31c @ 0x020bd31c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// Numeric-counter and concrete virtual ABI evidence: notes/sessions/matching-high-arm9-2026-11-07-bd31c-language.md
//cpp
// FUN_020bd31c @ 0x020bd31c (0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
extern "C" {
extern void FUN_020bce24(void *, unsigned char *);
extern void FUN_020bd348(void *, unsigned char *);

struct Session_bd31c {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6();
    int f1, f2, f3, f4;
    unsigned int f5;
};

void FUN_020bd31c(Session_bd31c *p, unsigned char *b) {
    p->f5 += (unsigned int)*b * 4;
    b[1] = p->v6();
    FUN_020bce24(p, b);
    FUN_020bd348(p, b);
}
}
