// FUN_020015ac @ 0x020015ac (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
int FUN_020015ac(const unsigned char *a,const unsigned char *b,unsigned int count){if(count)do{if(*a++!=*b++){if(a[-1]<b[-1])return -1;return 1;}}while(--count);return 0;}
