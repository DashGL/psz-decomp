// FUN_0207becc @ 0x0207becc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207becc @ 0x0207becc (thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Pack texture coordinates into geometry port. */
void FUN_0207becc(unsigned a,unsigned b){unsigned short x=(int)(a<<8)>>16;unsigned short y=(int)(b<<8)>>16;*(volatile unsigned *)0x04000488=x|((unsigned)y<<16);}
