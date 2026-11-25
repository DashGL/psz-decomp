// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02028bc8(const unsigned char **cursor){const unsigned char *p=*cursor;unsigned int value=*p++;if(value&128){unsigned int count=value&127;value=0;while(count--){if(value&0xff000000u)return 0xffffffffu;value=(value<<8)+*p++;}}*cursor=p;return value;}
