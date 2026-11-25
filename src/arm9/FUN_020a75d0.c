// FUN_020a75d0 @ 0x020a75d0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020a75d0 @ 0x020a75d0 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear 6144-byte storage following first word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a75d0.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int); void FUN_020a75d0(char *self) { FUN_020656b8(self+4,0,6144); }
