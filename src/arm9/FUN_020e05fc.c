// FUN_020e05fc @ 0x020e05fc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *FUN_020e060c(int,const void *,int,int,int);
void *FUN_020e05fc(int a0,const void *a1,int a2,int a3){return FUN_020e060c(a0,a1,a2,a3,32);}
