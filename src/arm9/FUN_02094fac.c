// flags: -O4,s
// check: 2.0/sp2p3 target=0x174 candidate=0x168 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/93 size=0x174 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Update collision eligibility, shape and displacement.
 * Evidence: scratch/coverage-high-game/inspect270.txt, inspect270forward.txt and 02094fac.txt. */
typedef struct{int x,y;}Pair;typedef struct{int x,y,z;}Vec;extern void *FUN_020be450(void);extern int FUN_0203b3c8(void *),FUN_0203b41c(void *),FUN_020be610(void *,int,Pair *),FUN_02034b8c(Vec *,int);extern void FUN_020be58c(void *,int,int,void *),FUN_020be5d4(void *,int,int,void *),FUN_020bf680(void *,Pair *,int),FUN_02035408(Vec *,int,int,int);
enum{E0=0,E1=1};
#define W(n) (*(int *)(s+(n)))
void FUN_02094fac(char *s){Pair center,delta;Vec pos;if(FUN_0203b3c8(s)||W(688)>0){W(636)&=~1;FUN_020be58c(FUN_020be450(),W(684),0,s+632);if(W(688)>0){W(688)--;if(W(688)<=0){W(248)&=~4;W(248)&=~0x200000;}}}else{W(248)&=~4;W(636)|=1;FUN_020be58c(FUN_020be450(),W(684),0,s+632);}if(!FUN_0203b41c(s)){center.x=W(180);center.y=W(188);FUN_020bf680(s+596,&center,2048);FUN_020be5d4(FUN_020be450(),W(684),0,s+596);if(((((unsigned)W(576)<12)?E1:E0))&&FUN_020be610(FUN_020be450(),W(684),&delta)){FUN_02035408(&pos,W(156)+delta.x,W(160),W(164)+delta.y);if(FUN_02034b8c(&pos,256)){W(156)+=delta.x;W(164)+=delta.y;W(180)=W(156);W(188)=W(164);}}}}
