// FUN_02050018 @ 0x02050018 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_02050018 @ 0x02050018 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/02050018.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_02050050(void *); extern void FUN_020500e8(void *,void *,void *,void *,void *);
void *FUN_02050018(void *a,void *b,void *c,void *d) { void *p=FUN_020ba894(276); if(p) p=FUN_02050050(p); if(p) FUN_020500e8(p,a,b,c,d); return p; }
