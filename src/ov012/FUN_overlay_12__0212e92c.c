// FUN_overlay_12__0212e92c @ 0x0212e92c (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e92c @ 0x0212e92c (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full extent and concrete helper inputs reviewed. */
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__0212d63c(void *,int),FUN_overlay_12__0212c8f8(void *,int,int,int);extern void *FUN_overlay_12__0212d268(int,int);void FUN_overlay_12__0212e92c(char *s){int i;if(*(int *)(s+540)){*(int *)(s+540)=0;FUN_overlay_12__0212c9a0();if(*(int *)(s+92)<=0)FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0,16),2);for(i=0;i<*(int *)(s+92);i++)FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(2,*(int *)(s+72+4*i)),51,16*i+69,2);}}
