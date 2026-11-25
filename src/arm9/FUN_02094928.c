// FUN_02094928 @ 0x02094928 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02094928 @ 0x02094928 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit six-argument action message for nonnull player.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094928.txt.
 */
extern void FUN_0208dac8(void *,int,void *,unsigned int,int,int); void FUN_02094928(char *self,int value) { if(self) { self[512]=-10; FUN_0208dac8((void *)0x0211a5c4,*(int *)(self+252),self+156,*(unsigned short *)(self+318),2,value); } }
