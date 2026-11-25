// FUN_02034528 @ 0x02034528 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034528 @ 0x02034528 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward embedded receiver +b8 and all three input arguments; callee consumes r0..r3.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02034528.txt.
 */
extern void FUN_020c6a50(void *,int,void *,int);
void FUN_02034528(char *self,int index,void *data,int value) { FUN_020c6a50(self+0xb8,index,data,value); }
