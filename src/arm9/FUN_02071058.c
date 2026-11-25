// FUN_02071058 @ 0x02071058 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071058 @ 0x02071058 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update +82 unless word +88 is one; always update +90 and clear word +94.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02071058.txt.
 */
void FUN_02071058(char *self,unsigned int value) {
    if(*(unsigned int *)(self+0x88)!=1) *(unsigned short *)(self+0x82)=value;
    *(unsigned short *)(self+0x90)=value; *(unsigned int *)(self+0x94)=0;
}
