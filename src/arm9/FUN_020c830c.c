// FUN_020c830c @ 0x020c830c (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// USA profile, random-range, and state helpers; scalar returns retained.
extern unsigned int FUN_020c7e54(void);
unsigned int FUN_020c830c(void){return *(unsigned int *)(FUN_020c7e54()+12);}
