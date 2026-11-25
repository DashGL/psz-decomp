// flags: -O4,s
// check: 2.0/sp2p3 target=0x198 candidate=0x18c words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/102 size=0x198 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Update model attachment and emit attack effect.
 * Evidence: scratch/coverage-high-game/inspect293.txt and 02080198.txt. */
typedef struct{int x,y,z;}Vec;typedef struct{int w[12];}Matrix;typedef struct{int w[9];}Rotation;
extern int FUN_0204260c(void *,int,Matrix *,Rotation *),FUN_020462f0(int,int,int,int),FUN_020b5b28(int),FUN_0203a9d4(void *),FUN_0204dab0(int),FUN_0204dac4(int);extern void *FUN_0208555c(int);extern unsigned char *FUN_02084798(int,int);
#pragma thumb off
extern unsigned short FUN_0205c9e4(int,int);
#pragma thumb on
extern void FUN_02046000(int,Vec *,int,int,int,int),FUN_0204a8fc(Vec *,Matrix *,Rotation *,Vec *),FUN_02048d20(int,Vec *,int,int,int,int,int,int),FUN_020b5b4c(int);
enum { E0 = 0, E1 = 1 };
#define W(n) (*(int *)(s+(n)))
#define B(n) (*(signed char *)(s+(n)))
#define U(n) (*(unsigned char *)(s+(n)))
void FUN_02080198(char *s,void *model){Matrix matrix;Rotation rotation;Vec offset,pos,axis;int spawn=0,bone,a,b,amount;unsigned short angle;void *actor;if(B(254)==15||B(254)==17){spawn=1;B(254)--;}bone=B(254)==16?5:8;if(!FUN_0204260c(model,bone,&matrix,&rotation))return;FUN_02046000(W(232),&offset,B(268),B(269),U(270),bone==5);FUN_0204a8fc(&pos,&matrix,&rotation,&offset);*(Vec *)(s+92)=pos;if((U(253)&8)?E1:E0){if(B(255)!=-1)FUN_0204260c(model,B(255),&matrix,&rotation);*(Rotation *)(s+112)=rotation;}if(spawn){axis.x=4096;axis.y=0;axis.z=0;FUN_0204a8fc(&pos,&matrix,&rotation,&axis);angle=FUN_0205c9e4(pos.x-matrix.w[9],pos.z-matrix.w[11]);a=FUN_020462f0(W(232),B(268),B(269),U(270));b=FUN_020b5b28(W(232));amount=0;actor=FUN_0208555c(W(232));if(actor)amount=FUN_02084798(B(268),FUN_0203a9d4(actor))[5]<<9;if(B(268)==11&&!FUN_0204dab0(W(232))&&!FUN_0204dac4(W(232)))amount/=2;FUN_02048d20(B(268),(Vec *)(s+92),angle,W(232),a,b,amount,0);FUN_020b5b4c(W(232));}}
