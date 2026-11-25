// FUN_020eb720 @ 0x020eb720 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_02076c4c(unsigned int,unsigned int);
unsigned int FUN_020eb720(void){return FUN_02076c4c(0x020fb4e4,16384);}
