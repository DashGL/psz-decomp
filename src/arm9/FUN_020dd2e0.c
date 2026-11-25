// flags: -O4,p
extern unsigned int FUN_020dd234(unsigned int);extern void FUN_020dd2d0(unsigned int,unsigned int);void FUN_020dd2e0(unsigned int s,unsigned int k){unsigned int v=FUN_020dd234(s);v&=~3u;v|=k;FUN_020dd2d0(s,v);}
