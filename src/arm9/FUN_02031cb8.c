// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02078ccc(unsigned int); extern int FUN_02094320(void *,unsigned int,void *);
int FUN_02031cb8(char *s,unsigned int id,void *arg) { int index=FUN_02078ccc(id)?E0:E1; void *p=((void **)(s+0xc))[index]; if(p) return FUN_02094320(p,id,arg); return 0; }
