// FUN_02000ec4 @ 0x02000ec4 (0xc, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
int FUN_02000ec4(int x){if(x<0)x=(int)(0u-(unsigned int)x);return x;}
