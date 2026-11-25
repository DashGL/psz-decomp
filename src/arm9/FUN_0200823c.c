// FUN_0200823c @ 0x0200823c (0x94, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
unsigned int FUN_0200823c(unsigned long long x){x-=(x>>1)&0x5555555555555555ULL;x=(x&0x3333333333333333ULL)+((x>>2)&0x3333333333333333ULL);x=(x+(x>>4))&0x0f0f0f0f0f0f0f0fULL;x+=x>>8;x+=x>>16;return (unsigned int)(x+(x>>32))&255;}
