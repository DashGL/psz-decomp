// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Field and mask evidence: notes/sessions/continue-low-20261112.md
// FUN_02033f70 @ 0x02033f70 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/02033f70.txt.
 */
extern char *FUN_02033c9c(void *,unsigned int);extern char *FUN_02033c6c(void *,unsigned int);extern void *FUN_02033b68(void *);extern void FUN_0201959c(void *);extern int FUN_020194ec(void *,void *);
void FUN_02033f70(void *s,unsigned int id,unsigned int link){char *r=FUN_02033c9c(s,link);char *p=FUN_02033c6c(s,id);if(p&&r){FUN_0201959c(FUN_02033b68(p));*(unsigned short *)(p+24)&=~2;if(FUN_020194ec(FUN_02033b68(p),*(void **)(r+8))==1){*(unsigned short *)(p+24)|=2;*(unsigned short *)(p+24)=(*(unsigned short *)(p+24)&~65532u)|((link<<2)&65535);}}}
