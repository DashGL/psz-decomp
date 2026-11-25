// FUN_020eb804 @ 0x020eb804 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_02076c4c(unsigned int,unsigned int);
extern void FUN_020a05a8(unsigned int,unsigned int,unsigned int);
void FUN_020eb804(void){FUN_02076c4c(0x020fbe58,6144);FUN_020a05a8(0x020fbe4c,0x2333,0x2333);}
