// FUN_020d7fdc @ 0x020d7fdc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020d7fdc @ 0x020d7fdc (0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d79ec(int *);
extern void FUN_020d7a50(int *, int);

void FUN_020d7fdc(int *p) {
    while (p[4] < p[1] && p[7] > 0) {
        int r = FUN_020d79ec(p + 5);
        FUN_020d7a50(p, r);
    }
}
