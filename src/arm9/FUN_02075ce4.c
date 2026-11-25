enum{E0=0,E1=1};
// flags: -O4,s
// check: 2.0/sp2p3 target=0x178 candidate=0x16c words=999 exact_bytes=999 bad_relocs=4
// near: ndiff=999/94 size=0x178 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Validate actor positions and update model flags or fallback position.
 * Evidence: scratch/coverage-high-game/inspect266.txt, inspect266forward.txt and 02075ce4.txt. */
typedef struct{int x,y,z;}Vec;typedef struct{int w[12];}Matrix;typedef struct{int w[9];}Rotation;extern void *UNK_02108c84,*UNK_02108c58;extern Vec UNK_020fc958;extern int FUN_0204243c(void *,int),FUN_020424b4(void *,int),FUN_0204260c(void *,int,Matrix *,Rotation *),FUN_02034b8c(Vec *,int);extern void FUN_02035408(Vec *,int,int,int),FUN_02031254(void *,Vec *,unsigned short *),FUN_02034680(void *,void *);
#define W(n) (*(int *)(s+(n)))
#define MODEL (*(char **)(s+140))
void FUN_02075ce4(char *s){Matrix m;Rotation r;Vec a,b,c,out;unsigned short angle;void *manager;{void *m0=UNK_02108c84;if(!MODEL||!m0)return;}if(FUN_0204243c(MODEL,0)){if(FUN_0204260c(MODEL,0,&m,&r)==1){FUN_02035408(&a,m.w[9],W(160),m.w[11]);if(FUN_02034b8c(&a,256))return;if(W(576)==15&&FUN_020424b4(MODEL,0)<8192)*(int *)(MODEL+24)&=~4;else *(int *)(MODEL+24)|=4;}else *(int *)(MODEL+24)&=~4;}else{*(int *)(MODEL+24)&=~4;FUN_02035408(&b,W(156),W(160),W(164));if(FUN_02034b8c(&b,256))return;FUN_02035408(&c,W(168),W(172),W(176));if(!FUN_02034b8c(&b,256)){if(!((W(248)&8)?E1:E0)){manager=UNK_02108c58;out=UNK_020fc958;angle=0;if(!manager)return;FUN_02031254(manager,&out,&angle);W(156)=out.x;W(160)=out.y;W(164)=out.z;}else FUN_02034680(s+156,s+296);}else FUN_02034680(s+156,s+168);}}
