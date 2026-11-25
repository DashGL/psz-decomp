// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct {int v[8];} T;
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_12__0212c9b8(void) {char *p=*(char **)0x0213f2c8;T t;if(p){int flag=(*(int *)p)?E0:E1;t=*(T *)0x0213888c;t.v[7]=flag;FUN_020c35d4(p+64,&t);FUN_020c38f0(*(char **)0x0213f2c8+64,0);}}
