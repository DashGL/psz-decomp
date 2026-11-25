// FUN_020eb858 @ 0x020eb858 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_0200c394(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_020b49a8(unsigned int);
unsigned int FUN_020eb858(void){FUN_0200c394(0x0211aaa4,50,40,0x020b4961,0);return FUN_020b49a8(0x0211aa88);}
