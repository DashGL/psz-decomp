// FUN_020980dc @ 0x020980dc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020980dc @ 0x020980dc (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate child and submit four-argument operation with record identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020980dc.txt.
 */
extern int FUN_02098110(void *,int,unsigned int,void *); int FUN_020980dc(char *self,int index,void *out) { if(index>=0 && index<5 && *(void **)(self+20+4*index)) { if(FUN_02098110(self,index,*(unsigned int *)(self+40+8*index),out)) return 1; } return 0; }
