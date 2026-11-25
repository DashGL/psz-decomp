// FUN_0202bf3c @ 0x0202bf3c (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_0202bf3c(unsigned int i,unsigned int *w){unsigned int x=w[(i+13)&15]^w[i^8]^w[(i+2)&15]^w[i];x=(x<<1)|(x>>31);w[i]=x;return x;}
