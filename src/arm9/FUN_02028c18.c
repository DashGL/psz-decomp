// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// FUN_02028c18 @ 0x02028c18
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
unsigned int FUN_02028c18(unsigned int out,unsigned int in,unsigned int count){unsigned int base=out;if(*(signed char *)out){do{++out;}while(*(signed char *)out);if((int)(out-base)>=255)return out;*(unsigned char *)out=44;*(unsigned char *)(out+1)=32;out+=2;}while(count-- && (int)(out-base)<255){*(unsigned char *)out=*(signed char *)in;++in;++out;}*(unsigned char *)out=0;return out;}
