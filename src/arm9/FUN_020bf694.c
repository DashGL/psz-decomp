// FUN_020bf694 @ 0x020bf694 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020bf694 @ 0x020bf694 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set tag one and copy two caller word pairs to+4 and+c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf694.txt.
 */
extern void FUN_02034e8c(void *,void *); void FUN_020bf694(char *self,void *a,void *b) { *(unsigned int *)self=1; FUN_02034e8c(self+4,a); FUN_02034e8c(self+12,b); }
