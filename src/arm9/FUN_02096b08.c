// FUN_02096b08 @ 0x02096b08 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02096b08 @ 0x02096b08 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward incoming argument to optional child with mode two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096b08.txt.
 */
extern void FUN_020982e8(void *,void *,int); void FUN_02096b08(void **self,void *arg) { if(self[8]) FUN_020982e8(self[8],arg,2); }
