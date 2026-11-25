// FUN_020e1af8 @ 0x020e1af8 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e9a10(int,const void *,int,int);
void FUN_020e1af8(int a0,const void *a1,int a2,int a3){FUN_020e9a10(a0,a1,a2,a3);}
