// FUN_02049f7c @ 0x02049f7c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_02049f7c @ 0x02049f7c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Install dispatch table, cleanup derived/base and free storage; return original address.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02049f7c.txt.
 */
extern void FUN_02047930(void *),FUN_0204b130(void *),FUN_020ba8ac(void *);
void *FUN_02049f7c(unsigned int *self) { self[0]=0x020f8fd4; FUN_02047930(self); FUN_0204b130(self); FUN_020ba8ac(self); return self; }
