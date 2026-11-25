// FUN_020dd1f8 @ 0x020dd1f8 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived state/runtime leaf.
unsigned long long FUN_020dd1f8(const unsigned int *p){return ((unsigned long long)p[2]<<32)|p[1];}
