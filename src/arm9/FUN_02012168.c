// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_02012168 @ 0x02012168
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned int FUN_02011d20(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02012168(unsigned int base,unsigned int length,unsigned int flags){unsigned int end=(length+base)&~3u;base=(base+3)&~3u;if(base>end || end-base<76)return 0;return FUN_02011d20(base,end,flags);}
