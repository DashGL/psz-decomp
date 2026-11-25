// FUN_overlay_12__0212f698 @ 0x0212f698 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212f698 @ 0x0212f698 (thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete game state/UI body and concrete call ABI reviewed. */
extern void FUN_overlay_12__0212f454(void *),FUN_02045630(void),FUN_0204f2d4(void),FUN_020be428(void),FUN_02033be0(void *),FUN_020c2624(void *,void *),FUN_overlay_12__0212d844(void);extern void *FUN_020c1fc8(void);void FUN_overlay_12__0212f698(char *s){void *p;FUN_overlay_12__0212f454(s);*(int *)(s+268)=-1;*(int *)(s+256)=0;FUN_02045630();FUN_0204f2d4();FUN_020be428();p=*(void **)0x02108c84;if(p)FUN_02033be0(p);FUN_020c2624(FUN_020c1fc8(),s+244);FUN_overlay_12__0212d844();}
