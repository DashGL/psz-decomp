// FUN_020d8a2c @ 0x020d8a2c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020d8978(void *,int,int,const void *,int,int,int,int);
int FUN_020d8a2c(void *a0,int a1,int a2,const void *a3,int a4,int a5,int a6){return FUN_020d8978(a0,a1,a2,a3,a4,a5,128,a6);}
