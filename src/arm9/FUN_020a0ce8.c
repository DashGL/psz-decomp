// FUN_020a0ce8 @ 0x020a0ce8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020a0ce8 @ 0x020a0ce8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve global subobject then return field +644.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0ce8.txt.
 */
extern void *FUN_02086e3c(void); extern char *FUN_0208724c(void *); void *FUN_020a0ce8(void) { return FUN_0208724c(FUN_02086e3c())+1604; }
