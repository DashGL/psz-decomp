// FUN_020b0960 @ 0x020b0960 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b0960 @ 0x020b0960 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize table, two words and two halfwords including fifth stack argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0960.txt.
 */
void *FUN_020b0960(char *self,unsigned int a,unsigned int b,unsigned int c,short d) { *(unsigned int *)self=0x020fc618; *(unsigned int *)(self+4)=a; *(unsigned int *)(self+8)=b; *(unsigned short *)(self+12)=c; *(short *)(self+14)=d; return self; }
