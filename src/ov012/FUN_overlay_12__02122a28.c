// FUN_overlay_12__02122a28 @ 0x02122a28 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122a28 @ 0x02122a28 (thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete scene setup/update, concrete callee inputs. */
extern void FUN_overlay_12__021351fc(int),FUN_02091708(void),FUN_02033400(void *,int);extern void *FUN_overlay_12__02135454(void);extern int FUN_overlay_12__02134c60(void *),FUN_020c2d94(int,int,int),FUN_020c2e38(void);
void FUN_overlay_12__02122a28(int *s){switch(s[3]){case 0:FUN_overlay_12__021351fc(5);FUN_02091708();if(!FUN_overlay_12__02134c60(FUN_overlay_12__02135454()) && !s[2])s[2]=FUN_020c2d94(0,2,0);if(s[2] && !FUN_020c2e38()){FUN_02033400(*(void **)0x02108c68,14);s[3]=1;}break;case 1:break;}}
