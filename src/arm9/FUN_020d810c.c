// FUN_020d810c @ 0x020d810c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020d810c @ 0x020d810c (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d90c8(int, int);
extern int FUN_020c7228(int, int *);

int FUN_020d810c(int *p, int a, int b) {
    int arr[2];
    arr[0] = FUN_020d90c8(0, a);
    arr[1] = FUN_020d90c8(0, b);
    return FUN_020c7228(p[6], arr);
}
