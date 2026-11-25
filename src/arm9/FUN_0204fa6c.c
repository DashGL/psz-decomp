// FUN_0204fa6c @ 0x0204fa6c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fa6c @ 0x0204fa6c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Install dispatch table and initialize words +14..+24 to zero/invalid defaults.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0204fa6c.txt.
 */
void *FUN_0204fa6c(unsigned int *self) { self[0]=0x020f927c; self[5]=0; self[6]=0; self[7]=~0u; self[8]=0; self[9]=0; return self; }
