// flags: -O4,p
// USA instruction-derived network/container leaf.
void *FUN_020cf0d8(char **handle,unsigned int id){char *p=*(char **)(*handle+0x5d4);while(p){if(*(unsigned int *)(p+16)==id)return p;p=*(char **)(p+76);}return 0;}
