// FUN_02033338 @ 0x02033338 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033338 @ 0x02033338 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02033338.txt.
 */
extern int FUN_02033488(void *,int); extern void FUN_02033378(void *,void *);
int FUN_02033338(char *s,int *p) { if(p[1]==7) *(int *)(s+0x50)=0; if(FUN_02033488(s,p[1])) return 0; if(*(int *)(s+0x50)<5) { FUN_02033378(s+16*(*(int *)(s+0x50)),p); *(unsigned int *)(s+0x50)+=1; return 1; } return 0; }
