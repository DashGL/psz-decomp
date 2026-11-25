// flags: -O4,s
extern int FUN_02030700(void *),FUN_02030738(void *);
int FUN_0208882c(char *s,int mode){
 if(mode==0){
  if(FUN_02030700(s+52))return 1;
 }else if(mode==1){
  if(FUN_02030700(s+52)){
   if(FUN_02030700(s+68)&&FUN_02030700(s+76)&&FUN_02030738(s+68)&&FUN_02030738(s+76))return 1;
   if((!FUN_02030700(s+76)&&FUN_02030738(s+76))||(FUN_02030700(s+68)&&FUN_02030738(s+68)))return 1;
  }
 }else if(mode==2){
  if(FUN_02030700(s+68)&&FUN_02030700(s+76)&&FUN_02030738(s+68)&&FUN_02030738(s+76))return 0;
  if((!FUN_02030700(s+68)&&FUN_02030738(s+68))||(FUN_02030700(s+76)&&FUN_02030738(s+76)))return 1;
 }else if(mode==3){
  if(!FUN_02030700(s+68)&&!FUN_02030700(s+76)&&FUN_02030738(s+68)&&FUN_02030738(s+76))return 0;
  if((!FUN_02030700(s+76)&&FUN_02030738(s+76))||(FUN_02030700(s+68)&&FUN_02030738(s+68)))return 1;
 }else if(mode==4){
  if(FUN_02030700(s+60))return 1;
 }
 return 0;
}
