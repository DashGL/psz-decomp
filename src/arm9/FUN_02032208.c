// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020321b8(void *,int,int); extern int FUN_02078ccc(int); extern int FUN_0203227c(void *,int,int,int,int);
int FUN_02032208(void *s,int a,int b,int c,int d) { int id=FUN_020321b8(s,b,c); if(id>=0) { int mode=FUN_02078ccc(a)?E0:E1; return FUN_0203227c(s,mode,id,d,a>=1000000); } return 0; }
