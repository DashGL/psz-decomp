// FUN_02032310 @ 0x02032310 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032310 @ 0x02032310 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02032310.txt.
 */
extern void *FUN_0208f068(void); extern int FUN_0208efa8(void *,int,int,int); extern int FUN_02032250(void *,int);
int FUN_02032310(char *s,int *p) { void *m=FUN_0208f068(); if(m) { int a=*p; if(a==0) return FUN_0208efa8(m,*(int *)(s+0x48),0,0); if(a==8) return FUN_0208efa8(m,*(int *)(s+0x48),0,1); return FUN_02032250(s,(int)((unsigned int)a-1)); } return 0; }
