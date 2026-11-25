// FUN_020e7c40 @ 0x020e7c40 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020e7c40 @ 0x020e7c40 (0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *FUN_020e961c(void);
extern void FUN_020d36ec(int);

void FUN_020e7c40(void) {
    FUN_020e961c()[0x1a8] = 2;
    FUN_020d36ec(**(int **)(FUN_020e961c() + 4));
    FUN_020e961c()[0x1a8] = 0;
}
