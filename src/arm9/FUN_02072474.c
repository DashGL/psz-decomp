//cpp
// flags: -O4,s
extern "C" {
typedef unsigned int u32;
typedef struct {
 int handle,parameter,center[2]; unsigned short angle;
 signed char flags,hits,attack,pad; short cooldown,remaining[5];
 unsigned short pad22; int shape,width,height; unsigned short rotation,pad32;
} Entry;
extern void FUN_0200c938(void *,unsigned int);
extern void FUN_020c0488(void *),FUN_020c0484(void *,int);
extern void *FUN_020be450(void);
extern int FUN_020beccc(void *,void *,int,void *,void *);
extern void FUN_020be4f8(void *,int,int),FUN_020be5d4(void *,int,int,void *);
extern void FUN_020bf680(void *,void *,int),FUN_020bf6e0(void *,void *,int,int,unsigned short);
extern int FUN_0207f770(void *),FUN_02078188(int);
extern char *FUN_020be5ec(void *,int);
extern void FUN_020437d8(int,int,int,int,int *);
static inline int check_active(char *self) { return (*(u32 *)(self+0x94)&4) ? 1 : 0; }
void FUN_02072474(char *self) {
 int parameter[3],init[13],shape[9],owner[2],center[2];
 int i; Entry *entry; int j; char *node; int changed; char *contact; int source,target,ready;
 if(!check_active(self))return;
 for(i=0;i<*(int *)(self+0xac);++i){
  entry=*(Entry **)(self+0xa8)+i;
  if(!(entry->flags&1))continue;
  if(entry->handle==-1){
   FUN_0200c938(parameter,12);parameter[1]=entry->parameter;
   FUN_0200c938(owner,8);owner[1]=*(int *)(self+12);
   FUN_020c0488(init);init[0]=entry->attack;FUN_020c0484(init,8);
   entry->handle=FUN_020beccc(FUN_020be450(),init,1,parameter,owner);
   FUN_020be4f8(FUN_020be450(),entry->handle,2);
  }
  if(entry->flags&2){
   unsigned short ang;
   center[0]=entry->center[0];center[1]=entry->center[1];
   ang=entry->angle;
   switch(entry->shape){
    case 0:FUN_020bf680(shape,center,entry->width);break;
    case 1:FUN_020bf6e0(shape,center,entry->width,entry->height,(unsigned short)(entry->rotation+ang));break;
   }
   FUN_020be5d4(FUN_020be450(),entry->handle,0,shape);entry->flags&=~2;
  }
  for(j=0;(unsigned int)j<5;++j)if(entry->remaining[j]>0)--entry->remaining[j];
  if(FUN_0207f770(self+0x64)==1)continue;
  node=FUN_020be5ec(FUN_020be450(),entry->handle);changed=0;
  while(node){
   contact=node+8;
   if(*(u32 *)(contact+0x34)&1){
    source=*(int *)(self+12);target=*(int *)(contact+0x40);
    if(FUN_02078188(target))ready=entry->remaining[target]<=0;
    else ready=entry->remaining[4]<=0;
    if(ready&&(source!=target||(entry->flags&4))){
     FUN_020437d8(source,entry->attack,target,*(int *)(contact+0x30),0);
     if(FUN_02078188(target))entry->remaining[target]=entry->cooldown;
     else entry->remaining[4]=entry->cooldown;
     changed=1;
    }
   }
   node=*(char **)(node+4);
  }
  if(changed)++entry->hits;
 }
}
}
