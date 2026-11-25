// FUN_0202642c @ 0x0202642c (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA list and record adapters; full ABI/extent evidence in root batch251.
extern unsigned FUN_02027ec8(unsigned);unsigned FUN_0202642c(unsigned p,unsigned *out,unsigned n){out[1]=n?p:0;out[0]=n;return p+FUN_02027ec8(n);}
