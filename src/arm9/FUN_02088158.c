// FUN_02088158 @ 0x02088158 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_02088158 @ 0x02088158 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction: two ordered geometry FIFO writes, preserving unsigned 16-bit truncation. */
void FUN_02088158(unsigned a,unsigned b,unsigned c){*(volatile unsigned *)0x0400048c=(unsigned short)a|((unsigned)(unsigned short)b<<16);*(volatile unsigned *)0x0400048c=(unsigned short)c;}
