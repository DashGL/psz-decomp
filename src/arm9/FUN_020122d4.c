// FUN_020122d4 @ 0x020122d4 (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011bdc(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020122d4(unsigned int self,unsigned int end,unsigned int flags){FUN_02011bdc(self,0x46524d48,self+48,end,flags);*(unsigned int *)(self+36)=*(unsigned int *)(self+24);*(unsigned int *)(self+40)=*(unsigned int *)(self+28);*(unsigned int *)(self+44)=0;return self;}
