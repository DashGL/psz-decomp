// FUN_overlay_12__02120a4c @ 0x02120a4c (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120a4c @ 0x02120a4c (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu initialization/state flow and concrete ABI. */
extern void FUN_02033400(void *,int);extern int FUN_overlay_12__021376f0(void *),FUN_020c2d94(int,int,int),FUN_020c2e38(void);
void FUN_overlay_12__02120a4c(int *s){switch(s[3]){case 0:if(!s[1]){FUN_02033400(*(void **)0x02108c68,14);s[3]=1;}else {if(FUN_overlay_12__021376f0((void *)s[1]) && !s[2])s[2]=FUN_020c2d94(0,2,0);if(s[2] && !FUN_020c2e38()){FUN_02033400(*(void **)0x02108c68,14);s[3]=1;}}break;case 1:break;}}
