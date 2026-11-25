// FUN_02033290 @ 0x02033290 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033290 @ 0x02033290 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Initialize base, invalidate word +4 and clear following two words; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02033290.txt.
 */
extern void FUN_0207f3fc(void *);
void *FUN_02033290(unsigned int *self) { FUN_0207f3fc(self); self[1]=~0u; self[2]=0; self[3]=0; return self; }
