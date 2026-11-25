// FUN_0205e534 @ 0x0205e534 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_0205e534 @ 0x0205e534 (inventory code 0x14, arm)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 112.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b112/0205e534.txt.
 */
extern void FUN_0205fc7c(void *,void *);void FUN_0205e534(void *p){*(volatile unsigned int *)0x04000400=22;FUN_0205fc7c(p,(void *)0x04000400);}
