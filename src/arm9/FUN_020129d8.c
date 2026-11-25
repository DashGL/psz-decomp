// FUN_020129d8 @ 0x020129d8 (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02012b70(unsigned int,unsigned int);
extern void FUN_02012a14(unsigned int);
unsigned int FUN_020129d8(unsigned int self,unsigned int *out){unsigned int p=FUN_02012b70(self,0x43484152);if(!p){*out=0;return 0;}FUN_02012a14(p+8);*out=p+8;return 1;}
