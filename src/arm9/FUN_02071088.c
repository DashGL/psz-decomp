// FUN_02071088 @ 0x02071088 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071088 @ 0x02071088 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store halfword +90.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071088.txt.
 */
void FUN_02071088(char *self,unsigned int value) { *(unsigned short *)(self+0x90)=value; }
