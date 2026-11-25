// flags: -O4,s
// USA overlay012 seven-state menu workflow; full272 bytes through global literal.
extern void *FUN_02086e3c(void);
extern int FUN_0208728c(void *),FUN_02087254(void *),FUN_020872c4(void *),FUN_overlay_12__021285f0(void *),FUN_overlay_12__02125fd8(void *);
extern void FUN_overlay_12__02128934(void *),FUN_overlay_12__02128a28(void *),FUN_overlay_12__02128600(void *),FUN_overlay_12__02128a40(void *,int);
int FUN_overlay_12__02128b8c(char *self){
 int result=*(unsigned *)0x0213f2dc==0,ready;char *child;
 switch(*(unsigned *)(self+16)){
 case 0:if(result&&FUN_overlay_12__021285f0(self)){result=0;*(unsigned *)(self+16)=3;}break;
 case 1:FUN_overlay_12__02128934(self);*(unsigned *)(self+16)=2;break;
 case 2:child=*(char **)(self+28);if(child&&FUN_overlay_12__02125fd8(child)>=0){*(unsigned *)(self+16)=0;FUN_overlay_12__02128a28(self);FUN_overlay_12__02128600(self);}break;
 case 3:
  if(*(unsigned *)(self+4)==0)ready=FUN_0208728c(FUN_02086e3c());else ready=FUN_02087254(FUN_02086e3c());
  if(ready){FUN_overlay_12__02128a40(self,3);*(unsigned *)(self+16)=4;}
  else {FUN_overlay_12__02128a40(self,5);*(unsigned *)(self+16)=5;}
  return 0;
 case 4:
  child=*(char **)(self+28);
  if(child){*(unsigned *)(child+96)|=4;if(!FUN_020872c4(FUN_02086e3c())){*(unsigned *)(self+48)=0;FUN_overlay_12__02128a40(self,6);return 1;}}
  return 0;
 case 5:child=*(char **)(self+28);if(child&&FUN_overlay_12__02125fd8(child)>=0)return 1;return 0;
 case 6:child=*(char **)(self+28);if(child&&FUN_overlay_12__02125fd8(child)>=0)return 1;return 0;
 }
 return result;
}
