// FUN_0203227c @ 0x0203227c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_0203227c @ 0x0203227c (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/0203227c.txt.
 */
extern void *FUN_0208f068(void); extern int FUN_0208efa8(void *,int,int,int);
int FUN_0203227c(char *s,int a,int b,int c,int d) { if(a>=0 && a<2) { void *m=FUN_0208f068(); if(m && b>=0 && c>=0) { int handle=-1; if(!d) handle=((int *)(s+0x38))[a]; if(handle>=0) return FUN_0208efa8(m,handle,b,c); } } return 0; }
