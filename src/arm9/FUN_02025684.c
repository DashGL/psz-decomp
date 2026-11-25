// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned char *FUN_02025684(unsigned char *p){unsigned int length=*p++;while(length){if((length&0xc0)==0xc0)return p+1;p+=length;length=*p++;}return p;}
