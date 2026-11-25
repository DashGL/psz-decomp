// FUN_0208728c @ 0x0208728c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0208728c @ 0x0208728c (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Snapshot allocation counters then update save state on success.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208728c.txt.
 */
extern void FUN_020ba8cc(unsigned int *,unsigned int *,void *,void *);extern int FUN_0208703c(void *,int);int FUN_0208728c(char *self){unsigned int a=0,b=0;FUN_020ba8cc(&a,&b,0,0);if(FUN_0208703c(self,4)){*(int *)(self+52)=3;*(int *)(self+6452)=1;return 1;}return 0;}
