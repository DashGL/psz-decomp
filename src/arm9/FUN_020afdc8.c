// FUN_020afdc8 @ 0x020afdc8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020afdc8 @ 0x020afdc8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute angle from negated vector components then add half turn in halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afdc8.txt.
 */
extern unsigned int FUN_0205c9e4(unsigned int,unsigned int); void FUN_020afdc8(char *self) { *(unsigned short *)(self+48)=FUN_0205c9e4(0u-*(unsigned int *)(self+24),0u-*(unsigned int *)(self+32)); *(unsigned short *)(self+48)+=32768; }
