// FUN_020e065c @ 0x020e065c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *FUN_020e05fc(int,const void *,int,int);
void *FUN_020e065c(const void *a0,int a1){return FUN_020e05fc(5,a0,a1,a1);}
