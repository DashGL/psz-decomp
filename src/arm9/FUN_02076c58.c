// FUN_02076c58 @ 0x02076c58 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076c58 @ 0x02076c58 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store two halfwords at +10/+12; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076c58.txt.
 */
void *FUN_02076c58(char *self,unsigned int a,unsigned int b) { *(unsigned short *)(self+16)=a; *(unsigned short *)(self+18)=b; return self; }
