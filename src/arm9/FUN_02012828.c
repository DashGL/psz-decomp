// FUN_02012828 @ 0x02012828 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0201256c(unsigned int);
unsigned int FUN_02012828(unsigned int self,unsigned int size){unsigned int pool=*(unsigned int *)(self+4);if(size>*(unsigned int *)(pool+40))return 0;return FUN_0201256c(pool);}
