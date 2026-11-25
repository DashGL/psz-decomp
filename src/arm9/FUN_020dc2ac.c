// FUN_020dc2ac @ 0x020dc2ac (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const unsigned int D_020f5f58[];
extern int FUN_0202dbec(int,int,unsigned int);
int FUN_020dc2ac(int a0,int a1,int a2,unsigned int a3){if(a2>12)a2=12;return FUN_0202dbec(a0,a1,D_020f5f58[a2]|a3);}
