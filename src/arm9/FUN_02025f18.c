// FUN_02025f18 @ 0x02025f18 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_021088c4[];
extern int FUN_02066fc8(int *,void **,int);
void *FUN_02025f18(int a0){void *out;if(FUN_02066fc8(D_021088c4,&out,a0))return out;return 0;}
