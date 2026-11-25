// FUN_020eb6f0 @ 0x020eb6f0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_02076c4c(unsigned int,unsigned int);
unsigned int FUN_020eb6f0(void){FUN_02076c4c(0x020fb444,2048);FUN_02076c4c(0x020fb438,12288);return FUN_02076c4c(0x020fb42c,16384);}
