// FUN_02071098 @ 0x02071098 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071098 @ 0x02071098 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store two words at +a0/+a4.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071098.txt.
 */
void FUN_02071098(char *self,unsigned int a,unsigned int b) { *(unsigned int *)(self+0xa0)=a; *(unsigned int *)(self+0xa4)=b; }
