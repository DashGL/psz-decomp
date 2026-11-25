// FUN_02091fc8 @ 0x02091fc8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02091fc8 @ 0x02091fc8 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run six-argument operation for positive count and cache result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091fc8.txt.
 */
extern int FUN_02091ff0(void *,unsigned int,unsigned int,int,void *,unsigned int); int FUN_02091fc8(char *self) { int count=*(int *)(self+16),result; if(count<=0) return 0; result=FUN_02091ff0(self,*(unsigned int *)(self+12),*(unsigned int *)(self+8),count,self+36,*(unsigned int *)(self+20)); *(int *)(self+24)=result; return result; }
