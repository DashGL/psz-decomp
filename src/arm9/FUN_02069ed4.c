// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_02069ed4(void){unsigned int saved=FUN_020683d4(),count=0,p=*(unsigned int *)0x02118600;while(p){p=*(unsigned int *)p;count++;}FUN_020683e8(saved);return count;}
