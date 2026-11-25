// FUN_02015118 @ 0x02015118 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM resource and memory adapters; ABI evidence in root batch247.
extern void FUN_0205cef4(unsigned);void FUN_02015118(unsigned char *table){int mode=table[*(volatile unsigned *)0x04001000&7];if(mode>=8)mode-=8;FUN_0205cef4(mode);}
