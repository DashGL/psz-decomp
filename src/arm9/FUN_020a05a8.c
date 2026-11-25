// FUN_020a05a8 @ 0x020a05a8 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020a05a8 @ 0x020a05a8 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize tag one and two caller fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a05a8.txt.
 */
void FUN_020a05a8(unsigned int *self,unsigned int a,unsigned int b) { self[0]=1; self[1]=a; self[2]=b; }
