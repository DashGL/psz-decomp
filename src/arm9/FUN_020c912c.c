// flags: -O4,p
// USA instruction-derived network support.
extern void FUN_020d1b74(void *,const char *);extern int FUN_020ca9a8(void *,unsigned int,int,void *,int,int);
int FUN_020c912c(char **handle,unsigned int id,void *arg){char *ctx;if(!handle || !(ctx=*handle))return 2;if(*(unsigned int *)(ctx+0x108))return 0;if(*(int *)(ctx+0x1f4)==4){FUN_020d1b74(handle,(const char *)0x020fcda4);return 2;}if(!arg){FUN_020d1b74(handle,(const char *)0x020fceb8);return 2;}return FUN_020ca9a8(handle,id,1,arg,0,0);}
