// FUN_02039108 @ 0x02039108 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02039108 @ 0x02039108 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02039108.txt.
 */
extern int FUN_020390f4(void *); extern int FUN_020384e4(void *,void *,void *,void *,int);
int FUN_02039108(char *s,void *a,void *b,void *c) { if(!FUN_020390f4(s)) return FUN_020384e4(s,a,b,c,0); *(unsigned int *)(s+0xf8)|=0x10000000; return 0; }
