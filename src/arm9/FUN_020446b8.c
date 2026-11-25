// FUN_020446b8 @ 0x020446b8 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020446b8 @ 0x020446b8 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/020446b8.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,int);
void FUN_020446b8(char *s) { int i; *(unsigned int *)(s+0x94)&=~2u; for(i=0;i<*(int *)(s+0xa4);i++) { int *slot=(int *)(*(char **)(s+0xa0)+52*i); FUN_020bed1c(FUN_020be450(),*slot); *slot=-1; } }
