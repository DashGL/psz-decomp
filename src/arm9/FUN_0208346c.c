// FUN_0208346c @ 0x0208346c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0208346c @ 0x0208346c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Pop pointer from four-entry stack only when signed count is [1,4].
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208346c.txt.
 */
int FUN_0208346c(char *self) { int count=*(int *)(self+16); if(count>0 && count<=4) { count--; *(int *)(self+16)=count; return ((int *)self)[count]; } return 0; }
