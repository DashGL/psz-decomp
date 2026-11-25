// near: concrete callback prototypes restored; target=0x1e0 candidate=0x1e0; codegen residuals parked; proof notes/reference/resume2-upper-20261112/typed-callbacks-proof.json
// FUN_020b15bc @ 0x020b15bc (Thumb, full extent 0x1e0)
// check: 2.0/sp2p3 target=0x1e0 candidate=0x1e0 words=17 exact_bytes=32 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-06.
 * Advance a moving object's two attached effects using model joints 0 and 6.
 * Spawn missing effects, stop them after the lifetime threshold, emit a sound
 * on the first update, and advance the halfword lifetime counter.
 * Model transform output is 48 bytes plus a separate 36-byte matrix.
 */
typedef struct {int v[3];} Vec;
typedef struct {int v[9];} Mat;
extern const short UNK_020ed83c[];
extern void FUN_020345f0(void *,void *),FUN_0204260c(void *,int,void *,void *);
extern char *FUN_020b0ee0(void *,int,void *,int);
extern void FUN_020b1cfc(void *,unsigned int),FUN_0204b3ac(void *,void (*)(void *,unsigned int),void *,unsigned int);
extern void FUN_020426b8(void *),FUN_020472bc(void *),FUN_020b0d90(void *,void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(void *,void *,void *,int),FUN_020c193c(int,int,int,int,int);
#define I(o) (*(int *)(self+(o)))
#define H(o) (*(unsigned short *)(self+(o)))
#define P(o) (*(char **)(self+(o)))
void FUN_020b15bc(char *self){
 Vec point;int transform[12];Mat rotation;Vec spawn0,spawn6,sound;short screen[2];int index;
 if(!P(0x20))return;
 index=H(0x58)>>4;
 I(0x34)+=(UNK_020ed83c[index*2]*I(0x60))>>12;
 I(0x3c)+=(UNK_020ed83c[index*2+1]*I(0x60))>>12;
 FUN_020345f0(&point,self+0x34);
 FUN_0204260c(P(0x20),0,transform,&rotation);
 point.v[0]=transform[9];point.v[1]=0;point.v[2]=transform[11];
 if(P(0x7c)){*(Vec *)(P(0x7c)+0x5c)=point;*(Mat *)(P(0x7c)+0x70)=rotation;}
 else{
  spawn0.v[0]=transform[9];spawn0.v[1]=transform[10];spawn0.v[2]=transform[11];
  P(0x7c)=FUN_020b0ee0(self,0x83,&spawn0,4096);
  if(P(0x7c)){*(int *)(P(0x7c)+0x48)=0xbb8000;FUN_0204b3ac(P(0x7c),FUN_020b1cfc,self,0);}
 }
 FUN_0204260c(P(0x20),6,transform,&rotation);
 point.v[0]=transform[9];point.v[1]=transform[10];point.v[2]=transform[11];
 if(P(0x80)){*(Vec *)(P(0x80)+0x5c)=point;*(Mat *)(P(0x80)+0x70)=rotation;}
 else{
  spawn6.v[0]=transform[9];spawn6.v[1]=transform[10];spawn6.v[2]=transform[11];
  P(0x80)=FUN_020b0ee0(self,0x48,&spawn6,4096);
  if(P(0x80)){*(int *)(P(0x80)+0x48)=0xbb8000;FUN_0204b3ac(P(0x80),FUN_020b1cfc,self,1);}
 }
 if(H(0x74)>H(0x7a)){
  I(0x70)=4;FUN_020426b8(P(0x20));FUN_020b0ee0(self,0x7a,self+0x4c,4096);
  if(P(0x80)){FUN_020472bc(P(0x80));P(0x80)=0;}
  if(P(0x7c)){FUN_020472bc(P(0x7c));P(0x7c)=0;}
 }
 FUN_020b0d90(self,self+0x4c);
 if(H(0x74)==0){FUN_020345f0(&sound,self+0x34);FUN_02090f74(screen,FUN_02090c20(),&sound,0);FUN_020c193c(0x3a,2,screen[0],screen[1],I(0x2c));}
 ++H(0x74);
}
