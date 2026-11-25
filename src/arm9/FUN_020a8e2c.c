// FUN_020a8e2c @ 0x020a8e2c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a8e2c @ 0x020a8e2c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve nested player resource and refresh it if nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a8e2c.txt.
 */
extern char *FUN_0208555c(int); extern void FUN_0204c6b0(void *); int FUN_020a8e2c(int index) { int result=0; char *p=FUN_0208555c(index); if(p) { p=*(char **)(p+436); if(p) { void *q=*(void **)(p+20); if(q) { FUN_0204c6b0(q); result=1; } } } return result; }
