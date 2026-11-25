// check: vers=2.0/sp2p3 target=0x2ac candidate=0x2ac words=39 exact_bytes=157 bad_relocs=0
// near: ndiff=39/171 size=0x2ac vers=2.0/sp2p3 next="homing fixed-product scalar frame and branch scheduling"
// flags: -O4,s
/* Homing approach followed by a rising curved departure and timed effects. */
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
extern short DAT_020ed83c[];
extern void *FUN_overlay_22__0219a638(int,int);
extern unsigned short FUN_0205c9e4(int,int),FUN_overlay_22__0219a3c4(unsigned short,unsigned short,unsigned short);
extern int FUN_overlay_22__0219a410(unsigned short,unsigned short);
extern void FUN_overlay_22__0219ad70(void *,int),FUN_overlay_22__0219a168(void *,void *),FUN_overlay_22__0219aa30(void *,void *,int,int,int),FUN_overlay_22__0219ace0(void *,int,int),FUN_overlay_22__0219ad2c(void *),FUN_overlay_22__0219ad08(void *,int,int),FUN_overlay_22__0219ae4c(void *,int,void *),FUN_overlay_22__0219cff8(void *,int),FUN_overlay_22__0219cb68(void *,int,int);
extern int FUN_overlay_22__0219ad48(void *),FUN_overlay_22__0219a5b8(void *);
void FUN_overlay_22__0219e6b0(void *self){
 int start=I(self,0xc8),end=!start?75:start+29;void *target;int trigger,x,z,distance,ratio,amount;unsigned short angle;
 if(!start&&I(self,0x48)<=44){
  target=FUN_overlay_22__0219a638(*(signed char *)((char *)self+0x5b),1);
  if(target){angle=FUN_0205c9e4(I(target,0xb4)-I(self,0x10),I(target,0xbc)-I(self,0x18));ratio=(-I(self,0x48))/-44;amount=(0x3334*ratio)/4096+0xccc;H(self,0x2a)=FUN_overlay_22__0219a3c4(H(self,0x2a),angle,(unsigned short)amount);}
  I(self,0x1c)=(int)(((long long)DAT_020ed83c[(H(self,0x2a)>>4)*2]*0x16b8+0x800)>>12);
  I(self,0x24)=(int)(((long long)DAT_020ed83c[(H(self,0x2a)>>4)*2+1]*0x16b8+0x800)>>12);
  I(self,0x10)+=I(self,0x1c);I(self,0x18)+=I(self,0x24);
  I(self,0x14)+=(int)(((long long)(-2048-I(self,0x14))*2048+2048)>>12);
  trigger=0;
  if(I(self,0x48)==44)trigger=1;
  else if(target){x=I(target,0xb4)-I(self,0x10);z=I(target,0xbc)-I(self,0x18);
   distance=(int)(((long long)x*x+2048)>>12)+(int)(((long long)z*z+2048)>>12);
   if(distance<=0x19000){angle=FUN_0205c9e4(x,z);if(FUN_overlay_22__0219a410(H(self,0x2a),angle)<=4096)trigger=1;}
  }
  if(trigger==1){FUN_overlay_22__0219ad70(self,4);I(self,0xc8)=I(self,0x48)+1;}
 }else if(start>0&&I(self,0x48)>=start&&I(self,0x48)<=end){
  H(self,0x28)-=0x888;amount=(0x2800*(I(self,0x48)-I(self,0xc8)))/30;
  I(self,0x14)=amount+((int)(((long long)DAT_020ed83c[(((int)((unsigned int)H(self,0x28)>>1))>>4)*2]*0x3800+2048)>>12)-2048);
  I(self,0x10)+=I(self,0x1c);I(self,0x18)+=I(self,0x24);
 }
 FUN_overlay_22__0219a168(self,(char *)self+0x10);FUN_overlay_22__0219aa30(self,(char *)self+0x10,H(self,0x28),H(self,0x2a),H(self,0x2c));
 if(I(self,0xc8)>0&&I(self,0x48)==I(self,0xc8))FUN_overlay_22__0219ace0(self,5,0);
 else if(I(self,0x48)==end)FUN_overlay_22__0219ad2c(self);
 if(FUN_overlay_22__0219ad48(self)==1)FUN_overlay_22__0219ad08(self,I(self,0x10),I(self,0x18));
 FUN_overlay_22__0219ae4c(self,2,(char *)self+0x10);
 if(FUN_overlay_22__0219a5b8(self)==0x41)FUN_overlay_22__0219cff8(self,1);
 if(I(self,0x48)>=74)FUN_overlay_22__0219cb68(self,10,0);
}
