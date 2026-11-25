// FUN_02070fe4 @ 0x02070fe4 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02070fe4 @ 0x02070fe4 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set halfword +92 to 8000.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070fe4.txt.
 */
void FUN_02070fe4(char *self) { *(unsigned short *)(self+0x92)=0x8000; }
