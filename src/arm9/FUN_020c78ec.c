// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived protocol/container leaf.
void FUN_020c78ec(const signed char *source,unsigned char *dest,int count){if(count>=2)dest[0]=((unsigned int)(int)source[0]<<2)|(source[1]>>4);if(count>=3)dest[1]=(((unsigned int)(int)source[1]<<28)>>24)|(source[2]>>2);if(count>=4)dest[2]=(((unsigned int)(int)source[2]<<30)>>24)|source[3];}
