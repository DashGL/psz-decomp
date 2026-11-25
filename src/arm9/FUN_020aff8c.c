// FUN_020aff8c @ 0x020aff8c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020aff8c @ 0x020aff8c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance offset and mark changed if delta passes predicate.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aff8c.txt.
 */
extern int FUN_020affa8(void *,int); void FUN_020aff8c(unsigned int *self,int delta) { if(FUN_020affa8(self,delta)) { self[2]+=delta; self[4]=1; } }
