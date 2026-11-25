// FUN_0202b824 @ 0x0202b824 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// Network cleanup; release callback provenance through020210a4/02025c44 in root batch271.
extern void (*UNK_02107094)(void *);
void FUN_0202b824(char *owner){char *s=*(char **)(owner+12);s[0x455]=0;if(*(void **)(s+0x824))UNK_02107094(*(void **)(s+0x824));*(void **)(s+0x824)=0;}
