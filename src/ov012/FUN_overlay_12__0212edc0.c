// FUN_overlay_12__0212edc0 @ 0x0212edc0 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212edc0 @ 0x0212edc0 (thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete game state/UI body and concrete call ABI reviewed. */
extern void FUN_overlay_12__0212f698(void *),FUN_overlay_12__0212ca04(void),FUN_020c2624(void *,void *),FUN_020a45a4(int),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02131dd4(void *),FUN_020ba940(void *);extern void *FUN_020c1fc8(void);void *FUN_overlay_12__0212edc0(char *s){*(unsigned *)s=0x0213e500;if(*(int *)(s+68)==1)FUN_overlay_12__0212f698(s);else if(*(int *)(s+68)==0){FUN_overlay_12__0212ca04();FUN_020c2624(FUN_020c1fc8(),s+244);}FUN_020a45a4(1);FUN_overlay_12__0212c9a0();FUN_overlay_12__02131dd4(s);FUN_020ba940(s);return s;}
