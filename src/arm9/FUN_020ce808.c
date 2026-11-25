// flags: -O4,p
// USA instruction-derived network/container leaf.
int FUN_020ce808(char **handle,char **out,unsigned int id){char *p=*(char **)(*handle+0x5c4);while(p){if(*(unsigned int *)(p+24)==id){if(out)*out=p;return 1;}p=*(char **)(p+32);}if(out)*out=0;return 0;}
