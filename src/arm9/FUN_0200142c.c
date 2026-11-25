// FUN_0200142c @ 0x0200142c (0x14, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 runtime leaf reconstructed from actual ARM instructions; no inline assembly.
int FUN_0200142c(unsigned char *dst,unsigned int value){if(!dst)return 0;*dst=(unsigned char)value;return 1;}
