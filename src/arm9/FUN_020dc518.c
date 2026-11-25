// FUN_020dc518 @ 0x020dc518 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// USA encoded identity operations; helper return values retained.
extern int FUN_02027b9c(void);
extern int FUN_02028620(void);
int FUN_020dc518(void){int result;if(FUN_02027b9c())return 11;result=FUN_02028620();if(result==0||result==-39)return 9;return 11;}
