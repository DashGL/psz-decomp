// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -O4,s
// USA overlay012 menu child update; one receiver input, full200-byte body.
extern char *FUN_02086e3c(void);
extern void FUN_overlay_12__02127f4c(void *,void *,int),FUN_overlay_12__02134868(int),FUN_overlay_12__02128a28(void *),FUN_overlay_12__02132478(void);
extern int FUN_overlay_12__02134888(void),FUN_overlay_12__021285f0(void *),FUN_overlay_12__02128b8c(void *),FUN_overlay_12__02128c9c(void *);
int FUN_overlay_12__02128528(char *self){
 char *resource,*child;
 if(*(unsigned *)(self+4)==0){
  if(*(unsigned *)(self+8)==0)resource=FUN_02086e3c()+40;else resource=FUN_02086e3c()+28;
  if(*(unsigned *)(self+8)==0)FUN_overlay_12__02127f4c(self+12,resource,2);else FUN_overlay_12__02127f4c(self+12,resource,1);
 }else {FUN_overlay_12__02127f4c(self+12,FUN_02086e3c()+16,0);}
 switch(*(unsigned *)(self+20)){
 case 0:
  if(FUN_overlay_12__02134888()){
   if(FUN_overlay_12__021285f0(self)){
    *(unsigned *)(self+20)=1;*(unsigned *)(self+16)=3;
    FUN_overlay_12__02128a28(self);FUN_overlay_12__02132478();return 0;
   }
   *(unsigned *)(self+20)=2;return 0;
  }
  return FUN_overlay_12__02128b8c(self);
 case 1:if(FUN_overlay_12__02128c9c(self))*(unsigned *)(self+20)=2;return 0;
 case 2:child=*(char **)(self+28);if(child)*(unsigned *)(child+96)|=4;FUN_overlay_12__02134868(1);return 0;
 default:return 0;
 }
}
