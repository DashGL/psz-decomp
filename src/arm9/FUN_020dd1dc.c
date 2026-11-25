// FUN_020dd1dc @ 0x020dd1dc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived protocol/runtime leaf.
unsigned long long FUN_020dd1dc(const unsigned int *p){return ((unsigned long long)(p[0]&0x7ff)<<32)|p[1];}
