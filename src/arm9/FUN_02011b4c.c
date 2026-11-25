// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
unsigned int FUN_02011b4c(unsigned int list,unsigned int address){unsigned int p=FUN_02011b20(list,0),found;while(p){if(*(unsigned int *)(p+24)<=address && address<*(unsigned int *)(p+28)){found=FUN_02011b4c(p+12,address);return found?found:p;}p=FUN_02011b20(list,p);}return 0;}
