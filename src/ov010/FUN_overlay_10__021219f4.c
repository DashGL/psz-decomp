// FUN_overlay_10__021219f4 @ 0x021219f4 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_10__021219f4 @ 0x021219f4 (thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full UI/state function and concrete call ABI reviewed. */
extern void FUN_020144f0(void),FUN_02014714(void),FUN_overlay_10__0211feb8(void *,int,int),FUN_overlay_10__0211ff08(void *,int),FUN_overlay_10__02121084(int);int FUN_overlay_10__021219f4(char *s){if(*(int *)(s+160)==0){FUN_020144f0();FUN_overlay_10__0211feb8(s,*(int *)(s+148),3);FUN_02014714();}else if(*(int *)(s+160)==1){FUN_020144f0();FUN_overlay_10__0211ff08(s,-1);FUN_02014714();}FUN_overlay_10__02121084(*(int *)(s+148));return 0;}
