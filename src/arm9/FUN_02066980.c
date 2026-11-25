// FUN_02066980 @ 0x02066980 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA thread helpers; conditional calls and scalar returns retained.
extern unsigned int FUN_020681f0(unsigned int);
unsigned int FUN_02066980(unsigned int thread){unsigned int alarm=*(unsigned int *)(thread+176);if(alarm)return FUN_020681f0(alarm);return alarm;}
