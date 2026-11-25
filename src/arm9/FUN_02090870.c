// FUN_02090870 @ 0x02090870 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02090870 @ 0x02090870 (thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Update sub-screen background-control fields. */
void FUN_02090870(unsigned a,unsigned b,unsigned c,unsigned d){volatile unsigned short *p=(volatile unsigned short *)0x0400100e;*p=(*p&67)|(a<<14)|(b<<7)|(c<<8)|(d<<2);}
