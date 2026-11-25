// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// flags: -O4,s
// USA instruction-derived runtime/container leaf.
int FUN_020d4b98(const char **pa,const char **pb){const char *a=*pa,*b=*pb;unsigned int y=*(unsigned int *)b,x=*(unsigned int *)a;if(x!=y)return (int)(x-y);return (short)(*(unsigned short *)(a+4)-*(unsigned short *)(b+4));}
