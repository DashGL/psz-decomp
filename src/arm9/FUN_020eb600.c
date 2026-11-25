// FUN_020eb600 @ 0x020eb600 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_02087f44(unsigned int,unsigned int);
unsigned int FUN_020eb600(void){unsigned int value=FUN_02087f44(114,0);*(unsigned int *)0x020fa988=value;return value;}
