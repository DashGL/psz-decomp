// flags: -O4,s
extern int FUN_overlay_12__02120570(void *,int),FUN_overlay_12__0212058c(void *,int),FUN_overlay_12__021205bc(void *,int);
extern void FUN_020c193c(int,int,int,int,int);
extern void *FUN_02031a74(void);
extern int FUN_02032208(void *,int,int,int,int);
extern const char *FUN_overlay_12__02121fc8(int,int);
extern void FUN_overlay_12__02121cd8(void *,int,int,const char *,int,int,int,int,void (*)(void));
extern void FUN_overlay_12__02121e14(void *,int,int),FUN_overlay_12__02121e84(void);
void FUN_overlay_12__02121d70(char *self,int mode)
{
    int first=FUN_overlay_12__02120570(self+72,mode);
    int second=FUN_overlay_12__0212058c(self+72,mode);
    int third=FUN_overlay_12__021205bc(self+72,mode);
    int selector,value;
    const char *format;
    switch(mode) {
    case 2: selector=0; FUN_020c193c(6,8,0,0,-1); break;
    case 3: selector=1; FUN_020c193c(6,6,0,0,-1); break;
    default: return;
    }
    value=FUN_02032208(FUN_02031a74(),second,first,0,third);
    format=FUN_overlay_12__02121fc8(1,selector);
    FUN_overlay_12__02121cd8(self,0,0,format,value,2,-1,1,FUN_overlay_12__02121e84);
    FUN_overlay_12__02121e14(self,first,second);
}
