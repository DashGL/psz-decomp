// FUN_020b51e8 @ 0x020b51e8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b51e8 @ 0x020b51e8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy signed byte pair, signed halfword and word individually.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b51e8.txt.
 */
void FUN_020b51e8(char *dest,char *source) { dest[0]=((signed char *)source)[0]; dest[1]=((signed char *)source)[1]; *(short *)(dest+2)=*(short *)(source+2); *(unsigned int *)(dest+4)=*(unsigned int *)(source+4); }
