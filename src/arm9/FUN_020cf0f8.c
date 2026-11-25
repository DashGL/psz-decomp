// flags: -O4,p
// USA instruction-derived network/container leaf.
void *FUN_020cf0f8(char **handle,unsigned int key,unsigned int port){char *ctx=*handle,*p;if(key==0 && port==0)return 0;p=*(char **)(ctx+0x5d4);while(p){if(*(unsigned int *)(p+8)==key && *(unsigned short *)(p+12)==port)return p;p=*(char **)(p+76);}return 0;}
