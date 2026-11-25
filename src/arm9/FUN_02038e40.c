// flags: -O4,s
typedef struct {unsigned int x,y,z;} V;
extern void *DAT_02108d08, *DAT_02108c84;
extern unsigned int DAT_02108cf0;
extern int FUN_0203ef54(void *,unsigned int);extern void FUN_02033dec(void *,void *,unsigned int);extern void FUN_020424fc(void *,int,unsigned int);extern int FUN_02042418(void *,int);extern void FUN_0203807c(void *,unsigned int,unsigned int,unsigned int);extern void FUN_020380a8(void *,unsigned short);extern void *FUN_02034b8c(V *,int);extern void FUN_02034680(void *,void *);
#define W(n) (*(unsigned int *)(s+(n)))
#define P(n) (*(char **)(s+(n)))
static inline void setV(V *v, unsigned int x, unsigned int y, unsigned int z) { v->x = x; v->y = y; v->z = z; }
static inline void setV2(V *v, unsigned int x, unsigned int y, unsigned int z) { v->y = y; v->x = x; v->z = z; }
void FUN_02038e40(char *s){
 V pos3, pos1, pos2;
 char *obj=P(140);
 if(obj){
  switch(W(232)){
   case 2:{void *manager=DAT_02108d08;if(manager&&FUN_0203ef54(manager,*(unsigned char *)(s+152))){void *other=DAT_02108c84;if(other&&P(144)){W(232)=4;FUN_02033dec(other,P(140),*(unsigned short *)(P(144)+4));FUN_020424fc(P(140),0,W(212));W(208)=0;}}break;}
   case 5:if((int)W(228)>0){if(FUN_02042418(obj,0))W(232)=4;}else{if(!W(228))FUN_020424fc(obj,0,W(212));else FUN_020424fc(obj,0,0);W(228)+=1;}break;
   case 3:*(unsigned int *)(obj+24)&=~1u;break;
  }
  FUN_0203807c(P(140),W(156),W(160),W(164));FUN_020380a8(P(140),*(unsigned short *)(s+192));
 }
 if(P(224)&&P(140)){
  if(*(unsigned int *)(P(140)+252)){pos1.x=W(180);pos1.y=205;pos1.z=W(188);*(V *)(P(224)+92)=pos1;}
  else{pos2.x=W(156);pos2.y=205;pos2.z=W(164);*(V *)(P(224)+92)=pos2;}
 }
 if(DAT_02108cf0){
  { unsigned int z=W(164), y=W(160), x=W(156); pos3.x=x; pos3.y=y; pos3.z=z; }
  if(FUN_02034b8c(&pos3,256))FUN_02034680(s+168,s+156);
 }else FUN_02034680(s+168,s+156);
}
