// FUN_020c8668 @ 0x020c8668 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020c7e54(void);
extern unsigned int FUN_020d34d4(unsigned int);
unsigned int FUN_020c8668(void){unsigned int state=FUN_020c7e54();if(!*(unsigned int *)(state+12))return 3;FUN_020d34d4(*(unsigned int *)state);return 0;}
