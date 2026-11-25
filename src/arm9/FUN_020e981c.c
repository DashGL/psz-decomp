// FUN_020e981c @ 0x020e981c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020e9830(int,void *,int,int);
int FUN_020e981c(void *a0,int a1,int a2){return FUN_020e9830(1,a0,a1,a2);}
