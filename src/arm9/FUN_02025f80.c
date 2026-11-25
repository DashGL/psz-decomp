// FUN_02025f80 @ 0x02025f80 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_021088c4[];
extern void FUN_02066f34(int *,void *,int);
void FUN_02025f80(void *a0){if(a0)FUN_02066f34(D_021088c4,a0,0);}
