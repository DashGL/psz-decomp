// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// twin of FUN_0207bea0
void FUN_0200cebc(int enabled){volatile unsigned short *p=(volatile unsigned short *)0x04000060;if(enabled)*p=(*p&0xffffcfff)|16;else *p=*p&0xcfef;}
