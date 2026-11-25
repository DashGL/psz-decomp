// FUN_020eb948 @ 0x020eb948 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_020c4434(unsigned int);
unsigned int FUN_020eb948(void){return FUN_020c4434(0x020fcb70);}
