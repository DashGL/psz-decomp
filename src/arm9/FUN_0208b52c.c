// FUN_0208b52c @ 0x0208b52c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0208b52c @ 0x0208b52c (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Prepare request and submit positive result with two payload words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b52c.txt.
 */
extern void FUN_0208b58c(void *,void *,void *),FUN_020c331c(unsigned short,unsigned int,unsigned int,unsigned int); extern int FUN_0208b768(void *,void *,int); void FUN_0208b52c(char *self,void *arg,int selector,unsigned int *payload) { int result; FUN_0208b58c(self,arg,payload); result=FUN_0208b768(self,arg,selector); if(result>0) FUN_020c331c((unsigned short)result,payload[0],payload[1],*(unsigned int *)(self+32)); }
