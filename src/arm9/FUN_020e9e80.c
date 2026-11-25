// FUN_020e9e80 @ 0x020e9e80 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020e15cc(unsigned int);
extern unsigned int FUN_020d3744(unsigned int);
unsigned int FUN_020e9e80(unsigned int id){unsigned int result=FUN_020d3744(FUN_020e15cc(id))-519;if((int)result>0)return result;return 0;}
