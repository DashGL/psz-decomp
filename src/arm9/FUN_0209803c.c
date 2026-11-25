// FUN_0209803c @ 0x0209803c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_0209803c @ 0x0209803c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve nonnull five-slot child and forward two operation arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209803c.txt.
 */
extern int FUN_020b7c7c(unsigned int,unsigned int,void *); int FUN_0209803c(unsigned int **self,int index,unsigned int arg,void *data) { int result=-1; if(index>=0 && index<5) { unsigned int *p=self[index]; if(p) result=FUN_020b7c7c(p[0],arg,data); } return result; }
