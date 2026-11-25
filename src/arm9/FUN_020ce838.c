// flags: -O4,p
// USA instruction-derived network/container leaf.
int FUN_020ce838(char **handle){char *p=*(char **)(*handle+0x5c4);while(p){if(*(unsigned int *)(p+8) && *(unsigned int *)p!=3)return 1;p=*(char **)(p+32);}return 0;}
