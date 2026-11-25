// flags: -O4,s
enum { E0 = 0, E1 = 1, E_INT = 0x10000 };
// check: vers=2.0/sp2p3 target=0x218 candidate=0x210 words=999 exact_bytes=999 bad_relocs=5
// near: ndiff=999/134 size=0x218 vers=2.0/sp2p3 next="timed bounce branch materialization and register scheduling"
// Timed approach, airborne bounce, paired emissions, and final state transition.
typedef struct {int x,y,z;} Vec3;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define V(p,o) ((Vec3 *)((char *)(p)+(o)))
extern int DAT_021a1748[],DAT_021a11fc[],DAT_021a120c;
extern int FUN_overlay_22__0219a408(unsigned short,int);
extern void FUN_020b3b30(Vec3 *,Vec3 *);
#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
#pragma thumb on
extern void FUN_02036368(Vec3 *);
extern void FUN_020991c0(Vec3 *,int *);
extern void FUN_02036848(Vec3 *,Vec3 *);
extern void FUN_overlay_22__0219a368(void *,int,int);
extern int FUN_overlay_22__0219a2d0(void *,int,int);
extern void FUN_overlay_22__0219af60(void *,int,int);
extern void FUN_overlay_22__0219a168(void *,Vec3 *);
extern void FUN_overlay_22__0219aa30(void *,Vec3 *,int,int,int);
extern void FUN_overlay_22__0219ace0(void *,int,int);
extern void FUN_overlay_22__0219ad2c(void *);
extern int FUN_overlay_22__0219ad48(void *);
extern void FUN_overlay_22__0219ad08(void *,int,int);
extern void FUN_overlay_22__0219ae34(void *,int);
extern void FUN_overlay_22__0219ae68(void *,int,int,Vec3 *);
extern int FUN_overlay_22__0219a5b8(void *);
extern void FUN_overlay_22__0219b4c0(void *,int);
extern void FUN_overlay_22__0219b274(void *,int,int);
void FUN_overlay_22__0219c1d8(void *self)
{
 int frame,count,spacing,at,i,half;Vec3 direction;
 if(!(DAT_021a1748[6]&1)){DAT_021a11fc[4]=0xd55;DAT_021a1748[6]|=1;}
 frame=I(self,0x48);
 if(frame<=6){int turn=FUN_overlay_22__0219a408(H(self,0x28),0xf400);H(self,0x28)+=turn/2;}
 else if(frame>=7&&frame<=24){
  {int z=B(self,0x5d)*4096;direction.x=B(self,0x5c)*4096;direction.y=0x1800;direction.z=z;}
  FUN_020b3b30(&direction,V(self,0x10));
  if((FUN_0205c86c(&direction)>DAT_021a11fc[4])?E1:E0){
   FUN_02036368(&direction);FUN_020991c0(&direction,&DAT_021a120c);
  }else{half=0x800;FUN_020991c0(&direction,&half);}
  FUN_02036848(V(self,0x10),&direction);
 }else if(frame>=25&&frame<=54){
  int turn;
  FUN_overlay_22__0219a368(self,B(self,0x5b),0x333);
  turn=FUN_overlay_22__0219a408(H(self,0x28),0);H(self,0x28)+=turn/2;
  I(self,0x20)-=0x21;FUN_02036848(V(self,0x10),V(self,0x1c));
  if(I(self,0x14)<0){
   if(FUN_overlay_22__0219a2d0(self,I(self,0x10),I(self,0x18))==1){
    I(self,0x14)=0;
    if(I(self,0x20)<0)I(self,0x20)=(int)(((long long)I(self,0x20)*-0xc00+0x800)>>12);
   }else I(self,0x20)+=0x44;
  }
  count=B(P(P(self,8),0x3c),6);
  if(count>=1&&I(self,0x48)>=18&&I(self,0x48)<=54){
   at=54;spacing=(at-90)/count;
   for(i=0;i<count;i++){
    if(I(self,0x48)==at){FUN_overlay_22__0219af60(self,3,8);FUN_overlay_22__0219af60(self,4,8);}
    at+=spacing;
   }
  }
 }
 FUN_overlay_22__0219a168(self,V(self,0x10));
 FUN_overlay_22__0219aa30(self,V(self,0x10),H(self,0x28),H(self,0x2a),H(self,0x2c));
 if(I(self,0x48)==7)FUN_overlay_22__0219ace0(self,7,0);
 else if(I(self,0x48)==24)FUN_overlay_22__0219ad2c(self);
 if(FUN_overlay_22__0219ad48(self)==1)FUN_overlay_22__0219ad08(self,I(self,0x10),I(self,0x18));
 FUN_overlay_22__0219ae34(self,0);
 if(I(self,0x48)%6==0)FUN_overlay_22__0219ae68(self,0,0,V(self,0x10));
 if(FUN_overlay_22__0219a5b8(self)==0x41)FUN_overlay_22__0219b4c0(self,1);
 if(I(self,0x48)>=54)FUN_overlay_22__0219b274(self,9,0);
}
