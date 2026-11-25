// FUN_0208b4e8 @ 0x0208b4e8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_0208b4e8 @ 0x0208b4e8 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear counters, reset two resources and fill four sentinel identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b4e8.txt.
 */
extern void FUN_020c38f0(void *,int); void FUN_0208b4e8(char *self) { int i; *(unsigned int *)(self+36)=0; *(unsigned int *)(self+56)=0; FUN_020c38f0(*(void **)(self+48),0); FUN_020c38f0(*(void **)(self+52),0); for(i=0;i<4;i++) ((int *)(self+60))[i]=-1; }
