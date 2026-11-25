// flags: -O4,s
typedef struct{unsigned int w[3];} Vector;
typedef struct{unsigned int w[9];} Matrix33;
typedef struct{unsigned int w[12];} Matrix43;
extern short DAT_020f083c[];
#pragma thumb off
extern void FUN_0205b16c(void *), FUN_0205aa80(void *), FUN_0205aed0(void *,void *,void *);
#pragma thumb on
extern void FUN_020473e8(void *,void *,int),FUN_020bf680(void *,void *,unsigned int),FUN_020c0488(void *),FUN_0204a8fc(void *,void *,void *,void *),FUN_0205abac(void *,int,int),FUN_02046390(void *,unsigned int);
extern void *FUN_02047798(void *,void *);
extern unsigned int FUN_0204daa8(int);
extern int FUN_02078188(unsigned int),FUN_02078198(unsigned int),FUN_0204260c(void *,unsigned int,void *,void *);
#define W(n) (*(unsigned int *)(s+(n)))
static inline void copy33(Matrix33 *d, const Matrix33 *src) { *d = *src; }
void FUN_02048950(char *s,char *input,unsigned int joint,unsigned int parameter,unsigned int kind){
 unsigned int planar[2],shape[9];Matrix43 matrix;Matrix33 rotation;Vector position;Matrix33 turn;char *owner;void *model;
 FUN_020473e8(s,input,1);
 W(260)=joint;*(Vector *)(s+264)=*(Vector *)(input+32);W(276)=0;W(284)=parameter;*(unsigned short *)(s+288)=*(unsigned short *)(s+106);
 planar[0]=W(92);planar[1]=W(100);FUN_020bf680(shape,planar,409);FUN_020c0488(s+312);FUN_02047798(s+324,shape);
 W(320)=4096;W(364)=1;W(368)=6;W(372)=0;
 if(FUN_02078188(W(232))){W(364)=1;W(368)=6;}
 if(FUN_02078198(W(232))){W(364)=2;W(368)=1;}
 W(376)=0;W(380)=W(232);W(280)=0;
 if(*(int *)(input+84)==50)W(280)=1;
 if(*(int *)(input+84)==51){W(72)=~0u;W(228)&=~2u;}
 owner=(char *)FUN_0204daa8((int)W(232));
 if(owner){
  model=*(void **)(owner+140);
  if(model){
   FUN_0205b16c(&matrix);FUN_0205aa80(&rotation);FUN_0204260c(model,W(260),&matrix,&rotation);
   FUN_0204a8fc(&position,&matrix,&rotation,s+264);*(Vector *)(s+92)=position;*(Matrix33 *)(s+112)=rotation;
  }
 }
 if(W(152)==~0u){
  FUN_0205aa80(&turn);
  FUN_0205abac(&turn,DAT_020f083c[0],DAT_020f083c[1]);
  FUN_0205aed0(&turn,s+112,s+112);
  copy33((Matrix33 *)(s+112),(Matrix33 *)(s+112));
 }
 W(296)=kind;FUN_02046390(s+300,W(296));
}
