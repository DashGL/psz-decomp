// flags: -O4,s
extern const int DAT_020f59e0[];
int FUN_020b7bf8(char *self) { int tag=**(*(signed char ***)(self+20)); unsigned int i; for(i=0;i<3;i++) if(tag==DAT_020f59e0[i]) return 1; return 0; }
