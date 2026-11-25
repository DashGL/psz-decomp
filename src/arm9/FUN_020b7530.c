// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct{int w[5];}Descriptor;
typedef struct{unsigned short h[4];}Directions;
typedef struct{int id;unsigned short dirs[4];signed char flags[4];signed char count;signed char pad[3];}Entry;
typedef struct{signed char num;signed char pad[7];int status;Entry entries[1];}Obj;
extern char *UNK_02108c64;extern Directions UNK_020f59b0;
extern int FUN_0206d428(Descriptor *),FUN_020b769c(void *,int),FUN_02032fc4(void *,int,int);
extern unsigned char *FUN_02032ca0(void *,int);
void FUN_020b7530(Obj *s){
 Descriptor desc;Directions copy,directions;unsigned char *current,*other;int i;signed char count;
 desc.w[0]=*(int *)(UNK_02108c64+36);desc.w[1]=*(int *)(UNK_02108c64+40);desc.w[2]=*(int *)(UNK_02108c64+44);desc.w[3]=*(int *)(UNK_02108c64+48);desc.w[4]=*(int *)(UNK_02108c64+52);
 if(FUN_0206d428(&desc))s->status=0;else{s->status=1;return;}
 current=FUN_02032ca0(UNK_02108c64,*(signed char *)(UNK_02108c64+22));
 if(!current||((current[51]&1)?E1:E0))return;
 s->entries[s->num].id=*(signed char *)(UNK_02108c64+22);
 count=0;i=0;directions=UNK_020f59b0;
 for(;i<4;i++){
  if((FUN_020b769c(current,i)>=0)?E1:E0){
   copy=directions;
   other=FUN_02032ca0(UNK_02108c64,FUN_020b769c(current,i));
   if(other&&!((other[51]&1)?E1:E0)){
    s->entries[s->num].dirs[count]=copy.h[i];
    if(FUN_02032fc4(current,i,1))s->entries[s->num].flags[count]=1;
    else if(FUN_02032fc4(current,i,2))s->entries[s->num].flags[count]=2;
    else if(FUN_02032fc4(current,i,4))s->entries[s->num].flags[count]=4;
    count++;
   }
  }
 }
 s->entries[s->num].count=count;
 s->num=s->num+1;
}
