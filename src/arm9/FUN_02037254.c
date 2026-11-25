// FUN_02037254 @ 0x02037254 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037254 @ 0x02037254 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02037254.txt.
 */
extern void *FUN_02090c20(void); extern void FUN_02090f74(short *,void *,void *,int); extern void FUN_020c1d7c(void *,void *,int,int,int);
void FUN_02037254(void *unused,void *a,void *b,void *c,int d) { short pair[2]; int flag=0; if(d==1) flag=1; FUN_02090f74(pair,FUN_02090c20(),c,flag); FUN_020c1d7c(a,b,pair[0],pair[1],4); }
