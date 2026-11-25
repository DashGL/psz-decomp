// FUN_overlay_12__0213738c @ 0x0213738c (0x92, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213738c @ 0x0213738c (thumb)
// check: 2.0/sp2p3 target=0x92 candidate=0x92 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full page dispatch/input logic and concrete receiver-only helpers reviewed. */
extern int FUN_overlay_12__02137564(void *),FUN_020bbf94(int),FUN_020bbfa8(int);extern void FUN_020c38f0(void *,int);void FUN_overlay_12__0213738c(char *s){int count=FUN_overlay_12__02137564(s),old=*(int *)(s+356),last=count-1;if(FUN_020bbf94(256)&&!FUN_020bbfa8(512)){++*(int *)(s+356);if(*(int *)(s+356)>last)*(int *)(s+356)=0;}if(FUN_020bbf94(512)&&!FUN_020bbfa8(256)){--*(int *)(s+356);if(*(int *)(s+356)<0)*(int *)(s+356)=last;}if(*(int *)(s+356)>=count)*(int *)(s+356)=0;if(*(int *)(s+356)!=old){FUN_020c38f0(s+196,0);*(int *)(s+360)=1;}}
