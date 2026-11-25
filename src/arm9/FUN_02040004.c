// FUN_02040004 @ 0x02040004 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040004 @ 0x02040004 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Look up object by signed key and return its +30 word; target has no null guard.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02040004.txt.
 */
extern char *FUN_0203ff68(void *,int);
unsigned int FUN_02040004(void *self,int key) { return *(unsigned int *)(FUN_0203ff68(self,key)+48); }
