// FUN_02061f90 @ 0x02061f90 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// USA DMA and packet helpers; cache ordering and scalar returns retained.
extern unsigned int FUN_0206740c(unsigned int,unsigned int);
extern unsigned int FUN_02067430(void);
extern unsigned int FUN_020643d4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02061f90(unsigned int length,unsigned int destination,unsigned int source){FUN_0206740c(source,(length+31)&~31u);FUN_02067430();return FUN_020643d4(source,length,destination);}
