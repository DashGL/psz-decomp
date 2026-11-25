// FUN_0200d1a8 @ 0x0200d1a8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// FUN_0200d1a8 @ 0x0200d1a8 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020c34a0(void *);
extern void FUN_020ba8ac(void *);
extern int D_02101df8;

static inline void del_fn(void *p) {
    if (p != 0) {
        FUN_020c34a0(p);
        FUN_020ba8ac(p);
    }
}

void **FUN_0200d1a8(void **p) {
    D_02101df8 = 0;
    if (*p != 0) {
        del_fn(*p);
        *p = 0;
    }
    return p;
}
