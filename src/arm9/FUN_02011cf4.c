// FUN_02011cf4 @ 0x02011cf4 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02011cf4(unsigned int *range,unsigned int tag){unsigned int p=range[0];*(unsigned short *)p=tag;*(unsigned short *)(p+2)=0;*(unsigned int *)(p+4)=range[1]-(p+16);*(unsigned int *)(p+8)=0;*(unsigned int *)(p+12)=0;return p;}
