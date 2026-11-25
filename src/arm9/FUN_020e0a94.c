// FUN_020e0a94 @ 0x020e0a94 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020e0a94 @ 0x020e0a94 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02003f6c(int, int);
extern void FUN_020e0a6c(int, int, int, int);
extern void FUN_02003c70(int);

void FUN_020e0a94(int a, int b, int c, int d) {
    int r = FUN_02003f6c(c, 0);
    FUN_020e0a6c(a, b, r, d);
    FUN_02003c70(c);
}
