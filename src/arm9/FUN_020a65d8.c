// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x178, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x178, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-small-diffs-2026-11-12.md
// flags: -O4,s
// check: 2.0/sp2p3 target=0x178 candidate=0x178 words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Initialize mode-dependent resource lists and display registration.
 * Evidence: scratch/coverage-high-game/inspect275.txt and 020a65d8.txt. */
extern char UNK_020fc350[],UNK_020fc370[];extern void *FUN_02096488(void),*FUN_020c1fc8(void),*FUN_020ba894(int),*FUN_020afec0(void *,int);extern char *FUN_020a6750(void *);extern int FUN_020967a4(void *),FUN_020c49e8(int,void *),FUN_020c2438(void *,void *,void *,int);extern void FUN_020aff74(void *,int,void *),FUN_020a67bc(void *),FUN_020a6774(void *),FUN_020ba8ac(void *);
#define W(n) (*(int *)(s+(n)))
#define P(n) (*(void **)(s+(n)))
void FUN_020a65d8(char *s){void *list;char *data;int i;W(340)=0x80000;W(344)=0xc0000;if(W(312)){if(FUN_020967a4(FUN_02096488())>0){*(unsigned short *)(s+332)=2;list=FUN_020ba894(24);if(list)list=FUN_020afec0(list,7);P(252)=list;data=FUN_020ba894(0x3c50);if(data)data=FUN_020a6750(data);if(data){if(FUN_020c49e8(11,data)){for(i=0;i<7;i++)FUN_020aff74(P(252),i,data+i*772);}else FUN_020a67bc(s);FUN_020ba8ac(data);}}else{*(unsigned short *)(s+332)=0;list=FUN_020ba894(24);if(list)list=FUN_020afec0(list,20);P(252)=list;data=FUN_020ba894(0x3c50);if(data)data=FUN_020a6750(data);if(data){if(FUN_020c49e8(10,data)){for(i=0;i<20;i++)FUN_020aff74(P(252),i,data+i*772);}FUN_020ba8ac(data);}}}else if(W(244)==3){*(unsigned short *)(s+332)=2;list=FUN_020ba894(24);if(list)list=FUN_020afec0(list,7);P(252)=list;FUN_020a67bc(s);}else{*(unsigned short *)(s+332)=1;list=FUN_020ba894(24);if(list)list=FUN_020afec0(list,19);P(252)=list;FUN_020a6774(s);}*(int *)((char *)P(252)+16)=1;W(248)=FUN_020c2438(FUN_020c1fc8(),UNK_020fc350,UNK_020fc370,2);}
