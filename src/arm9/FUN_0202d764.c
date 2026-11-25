// FUN_0202d764 @ 0x0202d764 (0xc, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// USA ARM veneer with explicit original callee ABI; root batch250.
extern unsigned * FUN_020577bc(unsigned *p);unsigned * FUN_0202d764(unsigned *p){return FUN_020577bc(p);}
