// FUN_overlay_12__02133ac4 @ 0x02133ac4 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02133ac4 @ 0x02133ac4 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu initialization/reset and concrete helper ABI. */
extern void FUN_020c38f0(void *,int),FUN_0203955c(void *),FUN_02088dd8(void *,const void *,int,int);extern void *FUN_02088c7c(void);
void FUN_overlay_12__02133ac4(int clearSecond){char *s=*(char **)0x0213f2f4;if(s && *(int *)(s+64)==1){FUN_020c38f0(s+76,0);if(clearSecond)FUN_020c38f0(s+136,0);FUN_020c38f0(s+196,0);FUN_0203955c(s+316);if(!*(int *)(s+352))FUN_02088dd8(FUN_02088c7c(),s+316,0,-1);*(int *)(s+344)=0;}}
