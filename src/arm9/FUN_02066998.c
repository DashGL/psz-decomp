// FUN_02066998 @ 0x02066998 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA thread helpers; conditional calls and scalar returns retained.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_020669dc(unsigned int);
unsigned int FUN_02066998(unsigned int thread){unsigned int mask=FUN_020683d4();if(*(unsigned int *)(thread+100)!=2)FUN_020669dc(thread+156);return FUN_020683e8(mask);}
