// FUN_020a113c @ 0x020a113c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a113c @ 0x020a113c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Increment resolved statistics subobject counter zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a113c.txt.
 */
extern void *FUN_02086e3c(void); extern char *FUN_0208724c(void *); extern void FUN_020a1428(void *,unsigned int); void FUN_020a113c(void) { char *p=FUN_0208724c(FUN_02086e3c())+1604; FUN_020a1428(p+236,0); }
