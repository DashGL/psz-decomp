// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// flags: -noThumb
// twin of FUN_02012168
extern unsigned int FUN_020122d4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02012410(unsigned int base,unsigned int length,unsigned int flags){unsigned int end=(length+base)&~3u;base=(base+3)&~3u;if(base>end || end-base<48)return 0;return FUN_020122d4(base,end,flags);}
