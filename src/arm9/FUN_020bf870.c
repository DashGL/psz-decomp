// FUN_020bf870 @ 0x020bf870 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020bf870 @ 0x020bf870 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve pair locally and emit three-dimensional vector with middle zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf870.txt.
 */
extern void FUN_020bf818(void *,void *); void FUN_020bf870(void *self,unsigned int *out) { unsigned int pair[2]; FUN_020bf818(self,pair); out[0]=pair[0]; out[1]=0; out[2]=pair[1]; }
