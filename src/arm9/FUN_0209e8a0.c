// FUN_0209e8a0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12c candidate=0x12c words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Apply interaction-driven counter or camera transitions and update the actor.
 * Evidence: scratch/coverage-high-game/inspect216.txt and 0209e8a0.txt. */
extern int UNK_020fb624[],UNK_020fb604[];extern void *UNK_02108c84;extern void *FUN_0209f170(void);extern void FUN_0209f404(void *,int),FUN_02099f50(void *),FUN_02034534(void *,int,int),FUN_02034528(void *,int,void *,int),FUN_0203041c(void *);extern int FUN_0209eaf4(void *);
#define W(n) (*(int *)(s+(n)))
void FUN_0209e8a0(char *s){int action=(unsigned char)s[46],kind=*(signed char *)(*(char **)(s+288)+32),v;if(kind<5){v=UNK_020fb624[kind];if(v==UNK_020fb604[1]||v==UNK_020fb604[4]){if(action==1){if(W(324)>0){--W(324);FUN_0209f404(FUN_0209f170(),W(324));}}else if(action==2){if(W(324)<30){++W(324);FUN_0209f404(FUN_0209f170(),W(324));}kind=*(signed char *)(*(char **)(s+288)+32);if(kind<5){v=UNK_020fb624[kind];if(v==UNK_020fb604[1]||v==UNK_020fb604[4])FUN_02099f50(s+72);}}if(action==3&&W(324)>0){--W(324);FUN_0209f404(FUN_0209f170(),W(324));}}else if(action==2){if(FUN_0209eaf4(s)){if(!(W(420)&1)){if(UNK_02108c84)FUN_02034534(UNK_02108c84,1,4096);W(420)|=1;}}else if(W(420)&1){if(UNK_02108c84)FUN_02034528(UNK_02108c84,1,s+328,4096);W(420)&=~1;}}}FUN_0203041c(s);}
