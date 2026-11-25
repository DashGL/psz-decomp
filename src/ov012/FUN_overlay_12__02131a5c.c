// FUN_overlay_12__02131a5c @ 0x02131a5c (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131a5c @ 0x02131a5c (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full body and concrete callee inputs reviewed. */
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02131b10(int),FUN_overlay_12__0212c694(void *),FUN_overlay_12__02131ff8(void *,int),FUN_overlay_12__02131abc(void),FUN_overlay_12__02131f88(void *);void FUN_overlay_12__02131a5c(int *s){if(s[16]==0){FUN_overlay_12__0212c9a0();FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(4);FUN_overlay_12__0212c694((void *)0x0213880c);FUN_overlay_12__02131ff8(s,1);*(int *)0x0213e20c=s[2];s[16]=1;}else if(s[16]==3){FUN_overlay_12__02131abc();*(int *)0x0213e20c=-1;FUN_overlay_12__02131f88(s);}}
