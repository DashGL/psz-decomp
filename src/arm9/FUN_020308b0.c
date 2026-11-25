// FUN_020308b0 @ 0x020308b0 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020308b0 @ 0x020308b0 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Store signed selector only for [0,2); preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/020308b0.txt.
 */
void *FUN_020308b0(char *self,int selector) { if(selector>=0 && selector<2) self[4]=selector; return self; }
