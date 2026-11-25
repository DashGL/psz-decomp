// FUN_02097aa4 @ 0x02097aa4 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02097aa4 @ 0x02097aa4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Enter action ten and refresh when predicate two succeeds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097aa4.txt.
 */
extern int FUN_02098dcc(void *,int); extern void FUN_02097088(void *); int FUN_02097aa4(unsigned int *self) { if(FUN_02098dcc((void *)self[2],2)) { self[13]=10; self[14]=0; FUN_02097088(self); return 1; } return 0; }
