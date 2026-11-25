// FUN_02021490 @ 0x02021490 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM resource and memory adapters; ABI evidence in root batch247.
extern unsigned FUN_020213c0(unsigned,unsigned,unsigned);extern unsigned FUN_02021474(unsigned);unsigned FUN_02021490(unsigned p,unsigned n){return FUN_02021474((unsigned short)FUN_020213c0(p,n,0));}
