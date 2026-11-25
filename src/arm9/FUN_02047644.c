// FUN_02047644 @ 0x02047644 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02047644 @ 0x02047644 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Initialize base, install dispatch table and clear two derived words; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02047644.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_02047644(unsigned int *self) { FUN_0204734c(self); self[0]=0x020f8ff4; self[65]=0; self[66]=0; return self; }
