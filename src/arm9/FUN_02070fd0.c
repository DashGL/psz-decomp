// FUN_02070fd0 @ 0x02070fd0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02070fd0 @ 0x02070fd0 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store wrapping halfword difference +82 minus +86 into +92.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070fd0.txt.
 */
void FUN_02070fd0(char *self) {
    *(unsigned short *)(self+0x92)=*(unsigned short *)(self+0x82)-*(unsigned short *)(self+0x86);
}
