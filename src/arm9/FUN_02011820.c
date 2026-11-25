// FUN_02011820 @ 0x02011820 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_02065774(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02011820(unsigned int self,unsigned int out,unsigned int length,unsigned int offset){FUN_02065774(*(unsigned int *)(self+164)+offset,out,length);return length;}
