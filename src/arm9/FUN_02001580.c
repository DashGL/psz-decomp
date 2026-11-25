// FUN_02001580 @ 0x02001580 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
void *FUN_02001580(const unsigned char *p,unsigned int value,unsigned int count){unsigned int needle=value&255;p+=count;if(count)do{if(*--p==needle)return (void *)p;}while(--count);return 0;}
