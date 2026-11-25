// FUN_02048048 @ 0x02048048 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048048 @ 0x02048048 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Initialize base, install dispatch table and initialize derived field; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02048048.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_02048048(char *self) { FUN_0204734c(self); *(unsigned int *)self=0x020f9174; *(unsigned int *)(self+0x104)=0; return self; }
