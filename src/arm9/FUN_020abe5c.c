// FUN_020abe5c @ 0x020abe5c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020abe5c @ 0x020abe5c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Raise positive count and forward two unchanged helper arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020abe5c.txt.
 */
extern void FUN_0203ba5c(void *,int,int,int); int FUN_020abe5c(char *self,int value,int a,int b) { int result=0; if(value>0 && value>*(int *)(self+3472)) { FUN_0203ba5c(self,value,a,b); *(int *)(self+3472)=value; result=1; } return result; }
