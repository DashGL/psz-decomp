// FUN_020c70a0 @ 0x020c70a0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020c70b8(void *,int,int,int,int,int);
int FUN_020c70a0(void *a0,int a1,int a2,int a3,int a4){return FUN_020c70b8(a0,a1,4,a2,a3,a4);}
