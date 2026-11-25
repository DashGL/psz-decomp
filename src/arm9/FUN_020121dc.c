// FUN_020121dc @ 0x020121dc (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_02011c70(unsigned int *,unsigned int);
extern unsigned int FUN_02011c9c(unsigned int,unsigned int);
extern unsigned int FUN_02012078(unsigned int,unsigned int *);
unsigned int FUN_020121dc(unsigned int self,unsigned int allocation){unsigned int range[2],header=allocation-16;FUN_02011c70(range,header);FUN_02011c9c(self+44,header);return FUN_02012078(self+36,range);}
