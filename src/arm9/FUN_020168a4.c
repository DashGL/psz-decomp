// FUN_020168a4 @ 0x020168a4 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_020168a4(unsigned int a,unsigned int b){unsigned int *p=*(unsigned int **)0x02105718;p[11]=a;p[10]=b;}
