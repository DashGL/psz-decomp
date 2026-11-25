// FUN_020c7478 @ 0x020c7478 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern int FUN_02028200(unsigned int);
extern int FUN_020c7458(int,int);
int FUN_020c7478(unsigned int a0){return FUN_020c7458(FUN_02028200(a0),-1);}
