// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_02033904 @ 0x02033904
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
void *FUN_02033904(char *s) { *(unsigned int *)s=0x020f6d28; *(unsigned int *)(s+4)=0; *(unsigned int *)(s+8)=0; *(unsigned int *)(s+12)=0; *(unsigned int *)(s+16)=0; *(unsigned short *)(s+20)=0; s[22]=0; *(unsigned char *)(s+23)=0xff; *(unsigned short *)(s+24)&=~1; *(unsigned short *)(s+24)&=~2; *(unsigned short *)(s+24)=(*(unsigned short *)(s+24)&0xffff0003)|0xfffc; *(unsigned short *)(s+26)=0xffff; return s; }
