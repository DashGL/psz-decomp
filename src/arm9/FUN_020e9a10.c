// FUN_020e9a10 @ 0x020e9a10 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_0211e5e4;
extern void FUN_020e9c60(int,const void *,int,int);
extern void FUN_020e9cf8(int,const void *,int,int);
void FUN_020e9a10(int a0,const void *a1,int a2,int a3){if(D_0211e5e4&&a1&&a2){if(a3)FUN_020e9c60(a0,a1,a2,a3);else FUN_020e9cf8(a0,a1,a2,a3);}}
