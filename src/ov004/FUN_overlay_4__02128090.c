// flags: -O4,s
// FUN_overlay_4__02128090 @ 0x02128090 (0x8c, Thumb)
// Initialize two allocated text objects and three resource handles, then emit setup feedback.
typedef struct {const char *path[3];} Paths;extern const Paths data_0212df44;extern void *FUN_0200c938(void *,int),*FUN_020ba894(unsigned int),*FUN_020c3564(void *),*FUN_020c1fc8(void);extern void FUN_overlay_4__021281f4(void *),FUN_020c193c(unsigned int,unsigned int,int,unsigned int,int);extern int FUN_020c247c(void *,const char *,unsigned int);
void *FUN_overlay_4__02128090(int *self){Paths paths;void *p;int i;self[0]=0;self[1]=0;self[2]=0;self[3]=0;self[4]=0;self[5]=0;self[6]=0;FUN_0200c938(self+7,12);p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);self[0]=(int)p;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);self[1]=(int)p;FUN_overlay_4__021281f4(self);paths=data_0212df44;for(i=0;i<3;i++)self[7+i]=FUN_020c247c(FUN_020c1fc8(),paths.path[i],2);FUN_020c193c(0,4,0,0,-1);return self;}
