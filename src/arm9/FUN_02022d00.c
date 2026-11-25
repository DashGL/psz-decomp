// FUN_02022d00 @ 0x02022d00 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_0202153c(int);
extern int FUN_02021a08(int);
int FUN_02022d00(int a0){int r=FUN_0202153c(a0);if(!r)return 1;return FUN_02021a08(r);}
