// FUN_02012890 @ 0x02012890 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int *FUN_02012890(unsigned int *p,unsigned int a,unsigned int b){p[0]=0x020ebe0c;p[1]=a;p[2]=b;p[3]=0;return p;}
