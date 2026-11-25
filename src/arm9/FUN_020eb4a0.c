// FUN_020eb4a0 @ 0x020eb4a0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retain their void contracts.
extern void FUN_02072df8(unsigned int);
extern void FUN_02072e04(unsigned int);
void FUN_020eb4a0(void){FUN_02072df8(0x0211a208);FUN_02072e04(0x0211a20c);}
