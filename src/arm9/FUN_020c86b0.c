// FUN_020c86b0 @ 0x020c86b0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// USA profile, random-range, and state helpers; scalar returns retained.
extern unsigned int FUN_020c7e54(void);
unsigned int FUN_020c86b0(void){unsigned int state=FUN_020c7e54();if(*(unsigned int *)(state+12))return *(unsigned short *)(state+56);return 0;}
