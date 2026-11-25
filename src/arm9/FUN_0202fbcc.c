// FUN_0202fbcc @ 0x0202fbcc (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA list and record adapters; full ABI/extent evidence in root batch251.
extern char *FUN_0202e424(void);unsigned FUN_0202fbcc(void){char *s=FUN_0202e424();unsigned *p=*(unsigned **)(s+0x2270);if(p && *(unsigned *)(s+0x2274)>12)return p[1];return 0;}
