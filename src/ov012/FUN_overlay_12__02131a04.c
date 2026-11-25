// FUN_overlay_12__02131a04 @ 0x02131a04 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131a04 @ 0x02131a04 (thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete CFG/pools and concrete helper ABI reviewed. */
extern void *FUN_02086e3c(void),*FUN_overlay_12__0212d268(int,int);extern int FUN_02087254(void *),FUN_overlay_12__02131fd0(void *,int);extern void FUN_overlay_12__02131668(void *,void *,int,int,int,int);int FUN_overlay_12__02131a04(char *s){if(*(int *)(s+64)!=1)return 0;if(*(int *)(s+496)){*(int *)(s+64)=2;*(int *)(s+500)=FUN_02087254(FUN_02086e3c());FUN_overlay_12__02131668(s,FUN_overlay_12__0212d268(0,26),0,-1,0,0);}else{*(int *)(s+64)=3;FUN_overlay_12__02131fd0(s,1);}return 1;}
