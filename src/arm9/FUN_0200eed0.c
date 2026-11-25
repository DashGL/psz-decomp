// FUN_0200eed0 @ 0x0200eed0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting audio/runtime leaf; actual instruction and literal review.
unsigned int FUN_0200eed0(unsigned int index){char *ctx=*(char **)0x02102874;char *table=*(char **)(ctx+0x84);if(index>=*(unsigned int *)(table+8))return 0;return *(unsigned int *)(table+16+index*16);}
