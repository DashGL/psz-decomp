// FUN_0204ceb8 @ 0x0204ceb8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204ceb8 @ 0x0204ceb8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Install dispatch table, cleanup receiver then free storage; target returns original address.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0204ceb8.txt.
 */
extern void FUN_0204d668(void *),FUN_020ba8ac(void *);
void *FUN_0204ceb8(unsigned int *self) { self[0]=0x020f91c8; FUN_0204d668(self); FUN_020ba8ac(self); return self; }
