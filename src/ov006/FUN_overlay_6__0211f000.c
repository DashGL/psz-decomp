// FUN_overlay_6__0211f000 @ 0x0211f000 (0x128, Thumb)
// Parse three decimal coordinates in reverse order, round scaled doubles and apply vector to owned object.
extern double FUN_02005340(const char *);extern void FUN_02037ff0(void *,const int *);
void FUN_overlay_6__0211f000(char *self){int xyz[3],y,z;double value;if(FUN_02005340(self+224)>0.0)value=0.5+4096.0*FUN_02005340(self+224);else value=4096.0*FUN_02005340(self+224)-0.5;z=(int)value;if(FUN_02005340(self+160)>0.0)value=0.5+4096.0*FUN_02005340(self+160);else value=4096.0*FUN_02005340(self+160)-0.5;y=(int)value;if(FUN_02005340(self+96)>0.0)value=0.5+4096.0*FUN_02005340(self+96);else value=4096.0*FUN_02005340(self+96)-0.5;xyz[0]=(int)value;xyz[1]=y;xyz[2]=z;FUN_02037ff0(*(void **)(*(char **)(self+672)+752),xyz);}
