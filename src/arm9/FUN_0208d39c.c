// FUN_0208d39c @ 0x0208d39c (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208d39c @ 0x0208d39c (inventory code 0x64, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply packet primary and secondary signed actor effects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d39c.txt.
 */
extern void *FUN_02085684(int);extern void FUN_0203b958(void *,int,int,int),FUN_0203b9b0(void *,int,int,int);void FUN_0208d39c(signed char *packet){void *actor=FUN_02085684(packet[1]);if(actor){int value=packet[4],i;if(value>=0 && value<6)FUN_0203b958(actor,value,1,1000);else FUN_0203b958(actor,-1,0,0);for(i=0;i<2;i++){value=packet[5+i];if(value)FUN_0203b9b0(actor,i,value,1000);else FUN_0203b9b0(actor,i,0,0);}}}
