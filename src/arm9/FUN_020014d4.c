// FUN_020014d4 @ 0x020014d4 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
void *FUN_020014d4(void *dst,const signed char *src,unsigned int count){signed char *out=dst;if(count)do{*out++=*src++;}while(--count);return dst;}
