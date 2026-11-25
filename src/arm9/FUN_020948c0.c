// FUN_020948c0 @ 0x020948c0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020948c0 @ 0x020948c0 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit six-argument action message for nonnull player.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020948c0.txt.
 */
extern void FUN_0208dac8(void *,int,void *,unsigned int,int,int); void FUN_020948c0(char *self,int value) { if(self) { FUN_0208dac8((void *)0x0211a5c4,*(int *)(self+252),self+156,*(unsigned short *)(self+318),1,value); } }
