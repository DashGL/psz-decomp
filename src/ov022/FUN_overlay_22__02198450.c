// flags: -O4,s
typedef struct {int x,y,z;} Vec3;
typedef struct {int mode,timer,delay,handle,field10,field14;} Slot;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
extern int DAT_021a106c[][2],DAT_021a1740;
extern Vec3 DAT_021a1040, D_021a1040;
extern int FUN_overlay_22__0219ae68(void *,int,int,Vec3 *);
extern void FUN_overlay_22__0219addc(void *,int);
extern void FUN_overlay_22__0219aed8(void *,int,Vec3 *);
extern void FUN_overlay_22__0219aea0(void *,int *);
extern void FUN_overlay_22__02197fd0(Slot *);
extern void FUN_overlay_22__021986f8(void *,int,int);
extern void FUN_overlay_22__0219af10(void *,int);
extern void FUN_overlay_22__0219ad88(void *,int,Vec3 *);
extern void FUN_overlay_22__0219f030(int);
enum { E0 = 0, E1 = 1 };
void FUN_overlay_22__02198450(void *self)
{
 int active=0,index,resource,kind,request,ok;Slot *slot;Vec3 position;
 for(index=0;index<9;index++){
  slot=(Slot *)((char *)self+0x5c)+index;
  if(slot->mode){
   if(slot->delay>0){
    if(slot->timer>=slot->delay){slot->timer=0;slot->delay=0;}
    else slot->timer++;
   }
   if(slot->delay==0){
    position.x=DAT_021a106c[index][0];position.y=0;position.z=DAT_021a106c[index][1];
    switch(slot->mode){
    case 0: break;
    case 1:case 3:
     switch(slot->timer){
     case 0:
      resource=21;
      if(slot->mode!=1&&slot->mode==3){
       switch(B(self,0x135)){case 0:break;case 1:resource=21;break;case 2:resource=22;break;case 3:resource=23;break;case 4:resource=24;break;}
      }
      slot->handle=FUN_overlay_22__0219ae68(self,resource,1,&position);
      FUN_overlay_22__0219addc(self,23);break;
     case 90:
      if(!(DAT_021a1740&1)){D_021a1040.x=4096;D_021a1040.y=61;D_021a1040.z=4096;DAT_021a1740|=1;}
      resource=FUN_overlay_22__0219ae68(self,25,0,&position);
      FUN_overlay_22__0219aed8(self,resource,&DAT_021a1040);break;
     case 150:
      FUN_overlay_22__0219aea0(self,&slot->handle);FUN_overlay_22__02197fd0(slot);break;
     }
     if(slot->timer>=90&&slot->timer>=105){
      kind=15;
      if(slot->mode!=1&&slot->mode==3){
       switch(B(self,0x135)){case 0:break;case 1:kind=16;break;case 2:kind=17;break;case 3:kind=18;break;case 4:kind=19;break;}
      }
      FUN_overlay_22__021986f8(self,index,kind);
     }
     if(slot->mode)slot->timer++;
     break;
    case 2:
     switch(slot->timer){
     case 0:
      resource=21;
      switch(B(self,0x135)){case 0:break;case 1:resource=21;break;case 2:resource=22;break;case 3:resource=23;break;case 4:resource=24;break;}
      resource=FUN_overlay_22__0219ae68(self,resource,1,&position);slot->handle=resource;
      FUN_overlay_22__0219af10(self,resource);FUN_overlay_22__0219ad88(self,21,&position);slot->timer=1;
      break;
     case 1: break;
     }
     break;
    }
   }
  }
  if(((slot->mode&&slot->delay==0)?E1:E0)==1)active=1;
 }
 ok=0;
 if(I(self,0x44)!=0&&I(self,0x44)!=1&&I(self,0x44)!=2)ok=1;
 if(ok==1){
  request=-1;
  if(active==1){if(I(self,0x144)!=5)request=5;}
  else if(I(self,0x144)!=4)request=4;
  if(request!=-1){I(self,0x144)=request;FUN_overlay_22__0219f030(I(self,0x144));}
 }
}
