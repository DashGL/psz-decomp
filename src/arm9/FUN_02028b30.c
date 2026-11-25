// FUN_02028b30 @ 0x02028b30 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *D_021181a0[];
extern void FUN_02066bb8(void *,unsigned int);
void FUN_02028b30(unsigned int a0){if(a0<32)FUN_02066bb8(D_021181a0[1],a0);}
