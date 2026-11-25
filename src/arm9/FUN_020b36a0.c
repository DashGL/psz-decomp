// flags: -O4,s
// check: 2.0/sp2p3 target=0x128 candidate=0x124 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/74 size=0x128 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Timed effects and randomized movement update.
 * Evidence: scratch/coverage-high-game/inspect220.txt and 020b36a0.txt. */
typedef struct{int x,y,z;} Vec;extern char UNK_0211c844[];extern int FUN_020b3410(void *,int);extern void FUN_020bc078(void *,void *,void *,void *);
#define W(n) (*(int *)(s+(n)))
void FUN_020b36a0(char *s,int force){int v,factor;Vec out;W(68)+=W(72);if((unsigned)W(68)>=32768||force){if(force){v=FUN_020b3410(UNK_0211c844,4095);W(64)=24576+(int)(((long long)v*10240+2048)>>12);W(52)=((long long)W(52)*4915+2048)>>12;W(60)=((long long)W(60)*4915+2048)>>12;}else{v=FUN_020b3410(UNK_0211c844,4095);W(64)=16384+(int)(((long long)v*10240+2048)>>12);W(52)=((long long)W(64)*(FUN_020b3410(UNK_0211c844,4095)-2048)+2048)>>12;W(60)=((long long)W(64)*(FUN_020b3410(UNK_0211c844,4095)-2048)+2048)>>12;}W(68)=0;}factor=82;FUN_020bc078(&out,s+28,s+52,&factor);*(Vec *)(s+28)=out;}
