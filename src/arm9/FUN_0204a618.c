// FUN_0204a618 @ 0x0204a618 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a618 @ 0x0204a618 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Drop receiver and tail-forward three arguments to factory.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0204a618.txt.
 */
extern void *FUN_0204c274(void *,void *,void *);
void *FUN_0204a618(void *unused,void *a,void *b,void *c) { return FUN_0204c274(a,b,c); }
