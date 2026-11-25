// FUN_02028098 @ 0x02028098 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020266fc(int,int,int,int,int,int);
int FUN_02028098(int a0,int a1,int a2,int a3){return FUN_020266fc(a0,a1,a2,0,0,a3);}
