// FUN_02033a60 @ 0x02033a60 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033a60 @ 0x02033a60 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/02033a60.txt.
 */
extern void *FUN_020ba894(unsigned int);extern void *FUN_02044d98(void *,void *,void *,unsigned int,unsigned int,int);extern void FUN_02033a4c(void *,void *);extern void FUN_020422fc(void *,int,void *);
void *FUN_02033a60(char *s,int index,int mode,void *resource){void *p=FUN_020ba894(316);if(p)p=FUN_02044d98(p,*(void **)(s+12),*(void **)(s+16),*(unsigned short *)(s+20),*(unsigned short *)(s+26),mode);if(p){FUN_02033a4c(s,p);if(resource&&index>-1&&index<5)FUN_020422fc(p,index,resource);return p;}return 0;}
