// FUN_02026308 @ 0x02026308 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA list and record adapters; full ABI/extent evidence in root batch251.
extern unsigned FUN_02027ec8(unsigned);unsigned FUN_02026308(unsigned char *p){unsigned a=FUN_02027ec8((unsigned)p[3]*4);return a+FUN_02027ec8(*(unsigned short *)p);}
