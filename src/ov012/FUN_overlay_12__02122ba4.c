// FUN_overlay_12__02122ba4 @ 0x02122ba4 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122ba4 @ 0x02122ba4 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full scene state worker and concrete callee ABI. */
extern void FUN_02033400(void *,int);extern int FUN_overlay_12__02135dd4(void *),FUN_020c2d94(int,int,int),FUN_020c2e38(void);
void FUN_overlay_12__02122ba4(int *s){switch(s[3]){case 0:if(!*(void **)0x0213f324){FUN_02033400(*(void **)0x02108c68,14);s[3]=1;}else {if(!FUN_overlay_12__02135dd4(*(void **)0x0213f324) && !s[2])s[2]=FUN_020c2d94(0,2,0);if(s[2] && !FUN_020c2e38()){FUN_02033400(*(void **)0x02108c68,14);s[3]=1;}}break;case 1:break;}}
