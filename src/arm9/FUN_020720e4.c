// FUN_020720e4 @ 0x020720e4 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020720e4 @ 0x020720e4 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store third/fourth/fifth arguments as three words at +6c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020720e4.txt.
 */
void FUN_020720e4(char *self,unsigned int unused,unsigned int x,unsigned int y,unsigned int z) {
    *(unsigned int *)(self+0x6c)=x; *(unsigned int *)(self+0x70)=y; *(unsigned int *)(self+0x74)=z;
}
