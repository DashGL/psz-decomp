// FUN_02044570 @ 0x02044570 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044570 @ 0x02044570 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02044570.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,unsigned int);
void FUN_02044570(char *s,int index,int enabled) { char *p=*(char **)(s+0xa0)+52*index; if(enabled) *(short *)(p+0x20)|=1; else { *(short *)(p+0x20)&=~1; FUN_020bed1c(FUN_020be450(),*(unsigned int *)p); *(unsigned int *)p=~0u; } }
