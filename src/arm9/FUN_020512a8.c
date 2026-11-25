// FUN_020512a8 @ 0x020512a8 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_020512a8 @ 0x020512a8 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/020512a8.txt.
 */
extern void FUN_02051314(void *); extern void FUN_020512d8(void *,int);
void FUN_020512a8(char *s) { if(*(int *)(s+0x50)==-1) { FUN_02051314(s); FUN_020512d8(s,1); } else { *(unsigned int *)(s+0x54)=1; FUN_02051314(s); FUN_020512d8(s,2); } }
