// FUN_02028730 @ 0x02028730 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_02028730(unsigned int n,unsigned char *p){p[0]=n>>24;p[1]=n>>16;p[2]=n>>8;p[3]=n;}
