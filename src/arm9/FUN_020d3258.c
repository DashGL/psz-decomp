// FUN_020d3258 @ 0x020d3258 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d3258 @ 0x020d3258 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020d52c8(int *, int *);
extern void FUN_020d4828(int *, int, int);

void FUN_020d3258(int *p, int a, int b, ...) {
    p[5] = 0;
    if (p[3] == 4) {
        FUN_020d52c8(&a, &b);
        FUN_020d4828(p, a, b);
        p[3] = 6;
    }
}
