// FUN_02084830 @ 0x02084830 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_02084830 @ 0x02084830 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset destination, allocate resource buffer and populate it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084830.txt.
 */
extern void FUN_020848b4(void *),FUN_020c3dcc(void *,unsigned int,void *,int);extern int FUN_020c3d34(void *,unsigned int);extern void *FUN_020ba8bc(unsigned int,unsigned int);void FUN_02084830(char **self,void *source,unsigned int id){FUN_020848b4(self);if(source){int size=FUN_020c3d34(source,id);if(size>0){self[0]=FUN_020ba8bc(size,16);if(self[0]){self[0][0]=0;FUN_020c3dcc(source,id,self[0],0);}}}}
