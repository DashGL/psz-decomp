// FUN_020dd228 @ 0x020dd228 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived state/runtime leaf.
void FUN_020dd228(unsigned int *p,unsigned int low,unsigned int high){p[1]=low;p[2]=high;}
