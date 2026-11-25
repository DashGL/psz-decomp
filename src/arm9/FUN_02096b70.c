// FUN_02096b70 @ 0x02096b70 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02096b70 @ 0x02096b70 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve identifier and forward fifth halfword argument to vector operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096b70.txt.
 */
extern int FUN_02096880(void *,int); extern void FUN_02096b18(void *,void *,int,void *,unsigned short); void FUN_02096b70(void *self,void *out,int id,void *vector,unsigned short angle) { int resolved=FUN_02096880(self,id); FUN_02096b18(self,out,resolved,vector,angle); }
