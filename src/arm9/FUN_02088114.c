// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_02088114 @ 0x02088114 (full extent 0x20).
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// twin of FUN_0207be00
/* USA ROM reconstruction, 2026-11-05. Pack colors and boolean flag into geometry port. */
void FUN_02088114(unsigned a,unsigned b,int enabled){*(volatile unsigned *)0x40004c4=(a|(b<<16))|((unsigned)(enabled!=0)<<15);}
