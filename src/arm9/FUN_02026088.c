// FUN_02026088 @ 0x02026088 (0x10, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA ARM resource and memory adapters; ABI evidence in root batch247.
extern int FUN_02026018(void *,char *);int FUN_02026088(char *a,char *b){return FUN_02026018(*(void **)(a+100),b);}
