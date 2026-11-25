// FUN_02065a80 @ 0x02065a80 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA DMA and packet helpers; cache ordering and scalar returns retained.
extern void FUN_02064d48(unsigned int);
extern unsigned int FUN_02065078(unsigned int);
unsigned int FUN_02065a80(void){FUN_02064d48(3);return FUN_02065078(0);}
