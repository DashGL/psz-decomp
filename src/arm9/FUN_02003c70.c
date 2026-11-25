// FUN_02003c70 @ 0x02003c70 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
unsigned int FUN_02003c70(const signed char *p){unsigned int length=~0u;do{length++;}while(*p++);return length;}
