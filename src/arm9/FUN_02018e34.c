// FUN_02018e34 @ 0x02018e34 (0x4c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_02018e34(char *p,unsigned int *a,unsigned int *b){if(a){*(unsigned short *)(p+16)&=~1u;*a=*(unsigned int *)(p+8);*(unsigned int *)(p+8)=0;}if(b){*(unsigned short *)(p+32)&=~1u;*b=*(unsigned int *)(p+24);*(unsigned int *)(p+24)=0;}}
