// FUN_020728d4 @ 0x020728d4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020728d4 @ 0x020728d4 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Bounds-check signed index and return 76-byte record from word +4.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020728d4.txt.
 */
void *FUN_020728d4(char *self,int index) {
    if(index>=0 && index<*(int *)self) return *(char **)(self+4)+76*index;
    return 0;
}
