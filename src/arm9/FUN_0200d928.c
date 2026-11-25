// FUN_0200d928 @ 0x0200d928 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern int FUN_0206a1d4(unsigned int);
unsigned int FUN_0200d928(unsigned int index,unsigned short *out){*out=(unsigned short)FUN_0206a1d4(index);return 1;}
