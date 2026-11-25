// FUN_0207be20 @ 0x0207be20 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207be20 @ 0x0207be20 (thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Pack colors and boolean flag into geometry port. */
void FUN_0207be20(unsigned a,unsigned b,int enabled){*(volatile unsigned *)0x040004c4=(a|(b<<16))|((unsigned)(enabled!=0)<<15);}
