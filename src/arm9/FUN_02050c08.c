// FUN_02050c08 @ 0x02050c08 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02050c08 @ 0x02050c08 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Release child +4 only when byte +d set; then clear +8 and byte +d.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02050c08.txt.
 */
extern void FUN_0201ce50(void *);
void FUN_02050c08(unsigned char *self) { void *child=*(void **)(self+4); if(child && self[13]) { FUN_0201ce50(child); *(void **)(self+8)=0; self[13]=0; } }
