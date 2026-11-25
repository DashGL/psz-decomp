// FUN_0202a1c4 @ 0x0202a1c4 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
void FUN_0202a1c4(unsigned char *end){int i=8;do{unsigned int v=(*--end+1)&255;*end=v;if(v)return;}while(--i);}
