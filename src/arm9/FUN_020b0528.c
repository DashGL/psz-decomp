// FUN_020b0528 @ 0x020b0528 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b0528 @ 0x020b0528 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize table, pointer and two narrowed halfwords.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0528.txt.
 */
void *FUN_020b0528(char *self,unsigned int value,unsigned int a,unsigned int b) { *(unsigned int *)self=0x020fc608; *(unsigned int *)(self+4)=value; *(unsigned short *)(self+8)=a; *(unsigned short *)(self+10)=b; return self; }
