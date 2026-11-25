// flags: -O4,s
typedef struct Item16 {int w[4];} Item16;
typedef struct Key4 {unsigned char b[4];} Key4;
extern void *data_02108d04;extern void *FUN_02086e3c(void),*FUN_02088c7c(void);extern void FUN_overlay_4__02124a64(void *),FUN_02087138(void *),FUN_0200c938(void *,unsigned int),FUN_overlay_4__02123348(void *),FUN_02039534(void *,const void *),FUN_02088dd8(void *,void *,int,int);extern Item16 *FUN_020b07b0(void *),*FUN_020b0828(void *),*FUN_020b08a0(void *),*FUN_020b091c(void *,int);extern int FUN_020b077c(void *),FUN_020b07f4(void *),FUN_020b086c(void *),FUN_020b08e4(void *,int),FUN_overlay_4__02124a88(void *,int),FUN_020b0244(void *);
void FUN_overlay_4__02123648(char *self){
Item16 items[7];int indices[7];int i;
FUN_overlay_4__02124a64(self);FUN_02087138(FUN_02086e3c());if(!data_02108d04)return;FUN_0200c938(items,112);
items[0]=*FUN_020b07b0(FUN_02086e3c());items[1]=*FUN_020b0828(FUN_02086e3c());items[2]=*FUN_020b091c(FUN_02086e3c(),0);items[3]=*FUN_020b091c(FUN_02086e3c(),1);items[4]=*FUN_020b091c(FUN_02086e3c(),2);items[5]=*FUN_020b091c(FUN_02086e3c(),3);items[6]=*FUN_020b08a0(FUN_02086e3c());
indices[0]=FUN_020b077c(FUN_02086e3c());indices[1]=FUN_020b07f4(FUN_02086e3c());indices[2]=FUN_020b08e4(FUN_02086e3c(),0);indices[3]=FUN_020b08e4(FUN_02086e3c(),1);indices[4]=FUN_020b08e4(FUN_02086e3c(),2);indices[5]=FUN_020b08e4(FUN_02086e3c(),3);indices[6]=FUN_020b086c(FUN_02086e3c());
*(int *)(self+244)=0;
for(i=0;i<7;i++){
 FUN_overlay_4__02123348(self+4+i*28);
 *(int *)(self+20+*(int *)(self+244)*28)=i;
 if(FUN_overlay_4__02124a88(self,i)){
  Item16 temp=*FUN_020b0828(FUN_02086e3c());
  Key4 key=*(Key4 *)&temp;
  if(FUN_020b0244(&key))continue;
  if(i-2==-1)continue;
  if(i-2>=(int)((temp.w[1]&(7<<22))>>22))continue;
 }
 FUN_02039534(self+4+*(int *)(self+244)*28,&items[i]);
 *(int *)(self+24+*(int *)(self+244)*28)=indices[i];
 *(int *)(self+20+*(int *)(self+244)*28)=i;
 *(int *)(self+28+*(int *)(self+244)*28)=1;
 (*(int *)(self+244))++;
}
*(int *)(self+204)=1;FUN_02088dd8(FUN_02088c7c(),self+4+*(int *)(self+220)*28,0,-1);*(int *)(self+208)=2;
}
