// FUN_overlay_12__02120b64 @ 0x02120b64 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120b64 @ 0x02120b64 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__02120b64 @ 0x02120b64 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu initialization/state flow and concrete ABI. */
extern void FUN_02033400(void *,int);extern int FUN_overlay_12__021355ec(void *,int),FUN_020c2d94(int,int,int),FUN_020c2e38(void);
void FUN_overlay_12__02120b64(int *s){switch(s[4]){case 0:if(!s[1]){FUN_02033400(*(void **)0x02108c68,14);s[4]=1;}else {if(FUN_overlay_12__021355ec((void *)s[1],s[2]) && !s[3])s[3]=FUN_020c2d94(0,2,0);if(s[3] && !FUN_020c2e38()){FUN_02033400(*(void **)0x02108c68,14);s[4]=1;}}break;case 1:break;}}
