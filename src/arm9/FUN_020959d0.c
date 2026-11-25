// FUN_020959d0 @ 0x020959d0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020959d0 @ 0x020959d0 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy source descriptor to receiver embedded field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020959d0.txt.
 */
extern void *FUN_02039534(void *,void *); void *FUN_020959d0(char *self,void *source) { return FUN_02039534(self+704,source); }
