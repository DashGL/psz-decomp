// FUN_020a984c @ 0x020a984c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020a984c @ 0x020a984c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance offset and mark changed if movement predicate succeeds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a984c.txt.
 */
extern int FUN_020a9868(void *,int); void FUN_020a984c(unsigned int *self,int delta) { if(FUN_020a9868(self,delta)) { self[6]+=delta; self[7]=1; } }
