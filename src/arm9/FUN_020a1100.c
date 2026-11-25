// FUN_020a1100 @ 0x020a1100 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a1100 @ 0x020a1100 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update resolved statistics subobject with index seven and incoming value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1100.txt.
 */
extern void *FUN_02086e3c(void); extern char *FUN_0208724c(void *); extern void FUN_020a145c(void *,int,unsigned int); void FUN_020a1100(unsigned int value) { char *p=FUN_0208724c(FUN_02086e3c())+1604; FUN_020a145c(p+236,7,value); }
