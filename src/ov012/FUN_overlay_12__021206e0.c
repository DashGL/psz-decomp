// FUN_overlay_12__021206e0 @ 0x021206e0 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__021206e0 @ 0x021206e0 (thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Difficulty eligibility from solo completion flags or party levels. */
extern int FUN_02084be8(void *),FUN_overlay_12__021204e4(void *,int),FUN_02078cec(int,int);extern char *FUN_02086e3c(void),*FUN_020870c4(void *),*FUN_02086150(int);
int FUN_overlay_12__021206e0(void *unused,int difficulty){int level,flag,quest,i;char *player;switch(difficulty){case 0:return 1;case 1:level=30;flag=2;quest=41;break;case 2:level=60;flag=3;quest=42;break;default:return 0;}if(FUN_02084be8((void *)0x0211a51c))return FUN_overlay_12__021204e4(FUN_020870c4(FUN_02086e3c())+3368,quest);for(i=0;i<4;i++){player=FUN_02086150(i);if(player&&!FUN_02078cec(i,flag)&&(unsigned char)player[86]<level)return 0;}return 1;}
