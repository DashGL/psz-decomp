// FUN_020baca8 @ 0x020baca8 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020baca8 @ 0x020baca8 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear peer flags and reset all queue cursors.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020baca8.txt.
 */
extern void FUN_020bab74(void *);void FUN_020baca8(char *self){int i;for(i=0;i<4;i++)self[12+i]=0;for(i=0;i<3;i++)FUN_020bab74(*(void **)(self+64+4*i));FUN_020bab74(self+28);*(int *)(self+20)=0;*(int *)(self+24)=0;}
