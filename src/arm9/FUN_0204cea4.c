// FUN_0204cea4 @ 0x0204cea4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204cea4 @ 0x0204cea4 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Install dispatch table, run cleanup helper and return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0204cea4.txt.
 */
extern void FUN_0204d668(void *);
void *FUN_0204cea4(unsigned int *self) { self[0]=0x020f91c8; FUN_0204d668(self); return self; }
