// FUN_0202862c @ 0x0202862c (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0202862c @ 0x0202862c (0x30, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020286ac(int, void *, void *, int);
extern int D_0210896c;

struct S {
    int a, b, c, d;
};

void *FUN_0202862c(struct S s) {
    FUN_020286ac(2, &s, &D_0210896c, 0x10);
    return &D_0210896c;
}
