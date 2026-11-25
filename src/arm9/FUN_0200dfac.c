// FUN_0200dfac @ 0x0200dfac (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011ac0(unsigned int,unsigned int);
extern unsigned int FUN_0200dd94(unsigned int,unsigned int);
extern void FUN_0200dde4(unsigned int);
void FUN_0200dfac(unsigned int self,unsigned int priority){unsigned int owner=*(unsigned int *)(self+4);if(owner){FUN_02011ac0(owner,self);*(unsigned int *)(self+4)=0;}FUN_02011ac0(0x02101e3c,self);*(unsigned char *)(self+61)=(unsigned char)priority;if(owner)FUN_0200dd94(owner,self);FUN_0200dde4(self);}
