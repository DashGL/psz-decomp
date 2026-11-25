// FUN_02080e7c @ 0x02080e7c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02080e7c @ 0x02080e7c (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear 15440 bytes with fill helper using value-first ABI.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080e7c.txt.
 */
extern void FUN_0206557c(int,void *,unsigned int);
void FUN_02080e7c(void *self) { FUN_0206557c(0,self,15440); }
