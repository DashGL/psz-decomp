// FUN_020477b4 @ 0x020477b4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020477b4 @ 0x020477b4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Install dispatch table then cleanup derived and base receiver; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020477b4.txt.
 */
extern void FUN_02047930(void *),FUN_0204b130(void *);
void *FUN_020477b4(unsigned int *self) { self[0]=0x020f8fd4; FUN_02047930(self); FUN_0204b130(self); return self; }
