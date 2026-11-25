// FUN_02018eec @ 0x02018eec (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02018eec(char *p){unsigned int old;*(unsigned short *)(p+50)&=~1u;old=*(unsigned int *)(p+44);*(unsigned int *)(p+44)=0;return old;}
