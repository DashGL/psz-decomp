// FUN_020207dc @ 0x020207dc (0x14, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA ARM resource and memory adapters; ABI evidence in root batch247.
extern unsigned FUN_020207f0(unsigned *,unsigned *,unsigned *,unsigned,unsigned);unsigned FUN_020207dc(unsigned *a,unsigned *b,unsigned *c,unsigned n){return FUN_020207f0(a,b,c,n,0);}
