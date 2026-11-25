// flags: -O4,s
void *FUN_020942f4(char *self,int id) { if(id>=0) { if(*(char **)self) { int i; for(i=0;i<*(int *)(self+4);i++) { char *q=*(char **)self+56*i; if(*(int *)(q+36)==id) return q; } } } return 0; }
