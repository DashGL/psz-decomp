// FUN_02071078 @ 0x02071078 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071078 @ 0x02071078 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store halfword +90 and clear word +94.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071078.txt.
 */
void FUN_02071078(char *self,unsigned int value) { *(unsigned short *)(self+0x90)=value; *(unsigned int *)(self+0x94)=0; }
