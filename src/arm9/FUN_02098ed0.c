// FUN_02098ed0 @ 0x02098ed0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02098ed0 @ 0x02098ed0 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Pass linked receiver and key plus caller output pointer to helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098ed0.txt.
 */
extern int FUN_020980dc(void *,int,void *); int FUN_02098ed0(void **self,void *out) { int *p=self[3]; if(p) return FUN_020980dc((void *)p[1],p[0],out); return 0; }
