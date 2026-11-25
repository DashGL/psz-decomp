// FUN_020e204c @ 0x020e204c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e1f90(int,const void *);
extern int FUN_020e205c(const void *,const void *,void (*)(int,const void *),int);
int FUN_020e204c(const void *a0,const void *a1){return FUN_020e205c(a0,a1,FUN_020e1f90,2);}
