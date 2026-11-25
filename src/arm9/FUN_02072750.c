// FUN_02072750 @ 0x02072750 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072750 @ 0x02072750 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward receiver/index and vector words zero/two to indexed-entry helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072750.txt.
 */
extern void FUN_02072760(void *,int,unsigned int,unsigned int);
void FUN_02072750(void *self,int index,unsigned int *vector) { FUN_02072760(self,index,vector[0],vector[2]); }
