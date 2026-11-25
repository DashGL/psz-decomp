// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// FUN_0200f048 @ 0x0200f048
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned int FUN_02012410(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_0200f330(unsigned int,unsigned int);
extern unsigned int FUN_02012448(unsigned int);
unsigned int FUN_0200f048(unsigned int memory,unsigned int size){unsigned int end=memory+size,base=(memory+3)&~3u,heap;if(base>end)return 0;size=end-base;if(size<16)return 0;heap=FUN_02012410(base+16,size-16,0);if(!heap)return 0;if(FUN_0200f330(base,heap))return base;FUN_02012448(heap);return 0;}
