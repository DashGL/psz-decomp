// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020e2f04 @ 0x020e2f04 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void ***D_0211de50;
extern const char DAT_02101730[];
extern int FUN_020c8b1c(void *,int,const char *);
extern void FUN_020e2f9c(int);
int FUN_020e2f04(int a0){int r=FUN_020c8b1c((&D_0211de50)[3][1],a0,DAT_02101730);FUN_020e2f9c(r);return r;}
