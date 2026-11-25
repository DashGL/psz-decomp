// FUN_overlay_24__0219ac04 @ 0x0219ac04 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219ac04 @ 0x0219ac04 (code 0x6, full pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Leaf callback writes its fixed value
 * through third argument r2; first two callback slots are unused.
 * Evidence: notes/sessions/coverage-overlays-2026-11-05-batch370.md.
 */
void FUN_overlay_24__0219ac04(void *unused0,void *unused1,int *output) {
    *output=0x1b33;
}
