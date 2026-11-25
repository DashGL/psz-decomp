// FUN_02071368 @ 0x02071368 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071368 @ 0x02071368 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy halfword +82 to +90 and clear mode word +88.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071368.txt.
 */
void FUN_02071368(char *self) { *(unsigned short *)(self+0x90)=*(unsigned short *)(self+0x82); *(unsigned int *)(self+0x88)=0; }
