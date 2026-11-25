// FUN_0202dbec @ 0x0202dbec (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_0202dd84(int,int,unsigned int);
extern int FUN_0202dc0c(int,int,unsigned int);
int FUN_0202dbec(int a0,int a1,unsigned int a2){if(!a0||!a1)return FUN_0202dd84(a0,a1,a2);return FUN_0202dc0c(a0,a1,a2);}
