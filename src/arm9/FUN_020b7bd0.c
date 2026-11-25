// flags: -O4,s
extern const int DAT_020f59ec[];
int FUN_020b7bd0(char *self) { int tag=**(*(signed char ***)(self+20)); unsigned int i; for(i=0;i<8;i++) if(tag==DAT_020f59ec[i]) return 1; return 0; }
