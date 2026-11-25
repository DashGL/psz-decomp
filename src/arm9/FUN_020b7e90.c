// FUN_020b7e90 @ 0x020b7e90 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020b7e90 @ 0x020b7e90 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test active object percentage below supplied threshold.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7e90.txt.
 */
extern int FUN_020375f0(void *);int FUN_020b7e90(char *self,int threshold){if(self && !FUN_020375f0(self)){char *value=self+52,*maximum=self+24;if(value && maximum && *(short *)maximum>0){int percent=100*(*(int *)value)/(*(short *)maximum);if(percent<threshold)return 1;}}return 0;}
