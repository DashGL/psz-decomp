// FUN_0200de38 @ 0x0200de38 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02069578(unsigned int,int);
extern unsigned int FUN_020694f0(unsigned int);
extern void FUN_0200ded8(unsigned int);
void FUN_0200de38(unsigned int self){if(*(unsigned char *)(self+44)==2)FUN_02069578(*(unsigned char *)(self+60),-723);FUN_020694f0(*(unsigned char *)(self+60));FUN_0200ded8(self);}
