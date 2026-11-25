// FUN_020a1444 @ 0x020a1444 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020a1444 @ 0x020a1444 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Saturating increment byte counter for signed index zero through six.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1444.txt.
 */
void FUN_020a1444(unsigned char *self,int index) { if(index>=0 && index<=6) { unsigned char *p=self+153; if(p[index]<255) p[index]++; } }
