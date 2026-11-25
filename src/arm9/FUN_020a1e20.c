// FUN_020a1e20 @ 0x020a1e20 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020a1e20 @ 0x020a1e20 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize four words, including fifth incoming stack argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1e20.txt.
 */
void FUN_020a1e20(unsigned int *self,unsigned int a,unsigned int b,unsigned int c,unsigned int d) { self[0]=a; self[1]=b; self[2]=c; self[3]=d; }
