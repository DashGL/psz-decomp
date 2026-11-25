// FUN_02033620 @ 0x02033620 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033620 @ 0x02033620 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02033620.txt.
 */
extern int FUN_020781b0(int); extern void *FUN_020352a4(void *,int); extern int FUN_02076fb0(void *);
int FUN_02033620(int id) { if(FUN_020781b0(id)) return FUN_02076fb0(FUN_020352a4(*(void **)0x02108cf4,id)); return 0; }
