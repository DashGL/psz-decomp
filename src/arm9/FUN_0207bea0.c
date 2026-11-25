// FUN_0207bea0 @ 0x0207bea0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207bea0 @ 0x0207bea0 (thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Adjust geometry display-control flags. */
void FUN_0207bea0(int enabled){volatile unsigned short *p=(volatile unsigned short *)0x04000060;if(enabled)*p=(*p&0xffffcfff)|8;else *p=*p&0xcff7;}
