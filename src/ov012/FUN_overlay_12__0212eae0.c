// FUN_overlay_12__0212eae0 @ 0x0212eae0 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212eae0 @ 0x0212eae0 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu state/control flow and concrete callee ABI. */
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02131b10(int),FUN_overlay_12__0212c694(void *),FUN_overlay_12__02131abc(void),FUN_overlay_12__0212d77c(void),FUN_overlay_12__02131f88(void *);extern void *FUN_020c1fc8(void);extern void FUN_020c23bc(void *,void *,int);
void FUN_overlay_12__0212eae0(int *s){if(s[16]==0){FUN_overlay_12__0212c9a0();FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);FUN_overlay_12__02131b10(4);FUN_overlay_12__0212c694((void *)0x021387ec);s[134]=1;s[16]=1;}else if(s[16]==2){FUN_overlay_12__02131abc();FUN_overlay_12__0212d77c();FUN_020c23bc(FUN_020c1fc8(),(void *)0x0213e380,2);*(int *)0x0213e20c=-1;FUN_overlay_12__02131f88(s);}}
