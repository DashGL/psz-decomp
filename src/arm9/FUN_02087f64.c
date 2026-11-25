// FUN_02087f64 @ 0x02087f64 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02087f64 @ 0x02087f64 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve selector value and update nested nonnull object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087f64.txt.
 */
extern unsigned int FUN_02087f48(void *,int); extern void FUN_0201d37c(void *,unsigned int); void FUN_02087f64(char *self) { if(self && *(void **)(self+48)) { unsigned int value=FUN_02087f48(self,*(int *)(self+232)); void *p=*(void **)(*(char **)(self+48)+28); if(p) FUN_0201d37c(p,value); } }
