// FUN_overlay_12__0212fc08 @ 0x0212fc08 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212fc08 @ 0x0212fc08 (thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu state/control flow and concrete callee ABI. */
extern void FUN_overlay_12__0212fc60(void *),FUN_overlay_12__0212fd1c(void *);
void FUN_overlay_12__0212fc08(int *s){if(s[16]==1 && s[9]!=0){int old=s[45];switch(s[17]){case 0:if(s[19]>0)FUN_overlay_12__0212fc60(s);break;case 1:switch(s[18]){case 0:FUN_overlay_12__0212fc60(s);break;case 1:FUN_overlay_12__0212fd1c(s);break;}break;}if(old!=s[45])s[47]=1;}}
