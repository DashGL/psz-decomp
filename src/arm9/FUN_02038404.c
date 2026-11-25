// FUN_02038404 @ 0x02038404 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038404 @ 0x02038404 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 41.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b41/02038404.txt.
 */
extern int FUN_0203ef7c(void *);extern void FUN_02042358(void *,int);extern void FUN_02038700(void *,int,int);extern void FUN_0203ec54(void *,void *,unsigned int,int);
int FUN_02038404(char *s,int mode){void *m=*(void **)0x02108d08;if(m&&*(void **)(s+140)&&!FUN_0203ef7c(m)){FUN_02042358(*(void **)(s+140),0);FUN_02038700(s,*(int *)(s+212),4);FUN_0203ec54(m,s+36,*(unsigned char *)(s+152),mode);*(int *)(s+232)=2;return 1;}return 0;}
