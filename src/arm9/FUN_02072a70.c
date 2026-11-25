// FUN_02072a70 @ 0x02072a70 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072a70 @ 0x02072a70 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Count records whose second word matches key.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072a70.txt.
 */
extern unsigned int *FUN_020728d4(void *,int); int FUN_02072a70(int *self,unsigned int key) { int count=0,i; for(i=0;i<self[0];i++) { unsigned int *p=FUN_020728d4(self,i); if(p[1]==key) count++; } return count; }
