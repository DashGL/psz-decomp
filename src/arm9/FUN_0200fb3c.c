// flags: -O4,s -noThumb
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_0200eb60(unsigned int);
extern unsigned int FUN_0200efe0(unsigned int);
extern void FUN_0200f008(unsigned int,unsigned int);
unsigned int FUN_0200fb3c(unsigned int expected,unsigned int archive,unsigned int index){unsigned int old,saved;if(!archive)return expected;saved=FUN_020683d4();old=FUN_0200eb60(archive);if(expected==FUN_0200efe0(index))FUN_0200f008(index,0);FUN_0200eb60(old);return FUN_020683e8(saved);}
