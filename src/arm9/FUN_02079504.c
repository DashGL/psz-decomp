// FUN_02079504 @ 0x02079504 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02079504 @ 0x02079504 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store input and rounded fixed-point product by0x1700.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079504.txt.
 */
void FUN_02079504(char *self,int value) { *(int *)(self+196)=value; *(int *)(self+172)=((long long)*(int *)(self+196)*5888+2048)>>12; }
