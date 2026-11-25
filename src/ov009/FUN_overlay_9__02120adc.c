// flags: -O4,p
extern short DAT_02120f94[];
extern char DAT_02121100[];
typedef struct { short kind,key; unsigned int value; } Text_02120adc;
extern void *FUN_020b1fd8(void *,int),*FUN_020b3044(void *);
extern void FUN_02084d98(void),FUN_020b236c(void *,int,void *),FUN_020b2330(void *,const char *);
extern int FUN_02073bfc(void),FUN_02073c08(void);
extern char *FUN_02093c1c(int,int,int),*FUN_020ae5d8(int,int,int);
extern int FUN_020c3f90(char *,unsigned int,const char *,...);
extern char *FUN_020c3f00(char *,const char *,unsigned int);
void *FUN_overlay_9__02120adc(char *self,int option){Text_02120adc text;char buffer[256];int id,kind;char *name;FUN_020b1fd8(self,1);*(unsigned int *)self=0x021210e8;*(int *)(self+108)=option;FUN_020b3044(self+112);if(*(int *)(self+108)<1){FUN_02084d98();text.kind=7;text.key=(DAT_02120f94)[*(int *)(self+108)];FUN_020b236c(self,0,&text);id=FUN_02073bfc();kind=FUN_02073c08();if(id>0){name=FUN_02093c1c(0,10,1);FUN_020c3f90(buffer,256,DAT_02121100,name,id,FUN_020ae5d8(id,kind,0));}else FUN_020c3f00(buffer,FUN_020ae5d8(0,kind,0),256);FUN_020b2330(self,buffer);}return self;}
