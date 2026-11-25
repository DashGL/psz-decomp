// flags: -O4,s
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
enum { E0 = 0, E1 = 1, E_INT = 0x10000 };
#define T(c) ((c) ? E1 : E0)
extern void *DAT_0210e24c;
extern int DAT_020fc988,DAT_0219c288,DAT_0219c298,DAT_0219c294;
extern void FUN_overlay_27__02198600(void *),FUN_02037910(void *,void *);
extern int FUN_02036c34(void *),FUN_02035b60(int),FUN_02072a70(void *,int);
extern void FUN_020729a4(void *,int,int,int,int,int),FUN_02072930(void *,int,int),FUN_02086d60(int *,int *,int *);
void FUN_overlay_27__0219833c(void *self)
{
 int delta,random,cooldown;void *actor,*manager,*current;
 FUN_overlay_27__02198600(self);actor=P(self,4);delta=FUN_02036c34(actor);manager=(char *)DAT_0210e24c+0x74;
 I(self,0x78)-=delta;
 switch(I(self,0x68)){
 case 0:
  if(T(I(self,0x2c)&2)){FUN_02037910(self,P(self,0x48));I(self,0x2c)|=1;break;}
  current=P(self,8);if(T(P(self,0x44)==current)&&!T(current==P(self,0x10)))break;
  I(self,0x70)-=delta;
  if(T(I(self,0x70)<=DAT_020fc988)){
   FUN_02037910(self,I(self,0x6c)?P(self,0x50):P(self,0x4c));
   random=FUN_02035b60(0x78000);I(self,0x70)=DAT_0219c288+random;I(self,0x6c)=I(self,0x6c)==0;
  }
  if(T(I(self,0x78)<=DAT_020fc988)||FUN_02072a70(manager,2)>0){
   I(self,0x74)-=delta;
   if(T(I(self,0x74)<=DAT_020fc988)){
    FUN_020729a4(manager,I(actor,0xc),2,0,0,0);I(self,0x68)=2;FUN_02037910(self,P(self,0x54));I(self,0x7c)=0;
   }
  }
  break;
 case 1:
  if(T(P(self,8)==P(self,0x10))){
   I(self,0x68)=0;FUN_02037910(self,P(self,0x4c));random=FUN_02035b60(0x78000);I(self,0x70)=DAT_0219c288+random;I(self,0x6c)=1;
  }
  break;
 case 2:
  switch(I(self,0x7c)){
  case 0:
   if(T(P(self,8)==P(self,0x10))){
    if(T(I(self,0x2c)&2)){FUN_02037910(self,P(self,0x58));I(self,0x7c)=2;}
    else{random=FUN_02035b60(2);FUN_02037910(self,random==0?P(self,0x5c):P(self,0x60));I(self,0x7c)=1;}
   }
   break;
  case 1:
   if(T(P(self,8)==P(self,0x10))){
    FUN_02072930(manager,I(actor,0xc),2);
    if(T(I(self,0x2c)&2))I(self,0x68)=0;
    else{
     FUN_02037910(self,P(self,0x58));I(self,0x7c)=2;FUN_02086d60(&cooldown,&DAT_0219c298,&DAT_0219c294);I(self,0x78)=cooldown;
    }
   }
   break;
  case 2:
   if(T(P(self,8)==P(self,0x10))){
    FUN_02072930(manager,I(actor,0xc),2);I(self,0x68)=0;FUN_02037910(self,P(self,0x4c));
    random=FUN_02035b60(0x78000);I(self,0x70)=DAT_0219c288+random;I(self,0x6c)=1;I(self,0x74)=FUN_02035b60(0x2d000);
   }
   break;
  }
  break;
 }
}
