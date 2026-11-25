// FUN_0207beec @ 0x0207beec (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207beec @ 0x0207beec (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Emit three vertex halfwords in two ordered stores. */
void FUN_0207beec(unsigned x,unsigned y,unsigned z){*(volatile unsigned *)0x0400048c=(unsigned short)x|((unsigned)(unsigned short)y<<16);*(volatile unsigned *)0x0400048c=(unsigned short)z;}
