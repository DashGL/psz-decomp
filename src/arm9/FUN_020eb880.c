// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_020eb880 @ 0x020eb880
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int data_020fc794[];
extern unsigned int FUN_0205c520(unsigned int,unsigned int);
unsigned int FUN_020eb880(void){unsigned int value=FUN_0205c520(0xb4000,0x2000);*data_020fc794=value;*(data_020fc794+1)=0u-value;value=FUN_0205c520(0x87000,0x2000);*(data_020fc794+3)=value;value=0u-value;*(data_020fc794+2)=value;return value;}
