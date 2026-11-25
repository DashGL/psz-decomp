// FUN_02033ce0 @ 0x02033ce0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033ce0 @ 0x02033ce0 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/02033ce0.txt.
 */
extern void *FUN_02033c6c(void *,unsigned int);extern char *FUN_02033cbc(void *,unsigned int);extern void *FUN_02033a60(void *,int,int,void *);extern void FUN_020344d8(void *,void *,int);
void *FUN_02033ce0(void *s,unsigned int id,int mode,unsigned int link) {void *p=FUN_02033c6c(s,id);char *r=FUN_02033cbc(s,link);if(p){if(r)p=FUN_02033a60(p,*(unsigned char *)(r+18),mode,*(void **)(r+12));else p=FUN_02033a60(p,-1,mode,0);FUN_020344d8(s,p,mode);return p;}return 0;}
