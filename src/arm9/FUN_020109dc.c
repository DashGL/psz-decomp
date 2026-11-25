// FUN_020109dc @ 0x020109dc (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020666f8(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_02011974(unsigned int,unsigned int);
extern unsigned int FUN_02067184(unsigned int);
extern void FUN_02066a94(unsigned int);
void FUN_020109dc(unsigned int self,unsigned int priority){FUN_020666f8(self,0x02011840,self,self+1216,1024,priority);FUN_02011974(self+1248,0);FUN_02067184(self+1224);*(unsigned int *)(self+1220)=0;*(unsigned int *)(self+1216)=0;FUN_02066a94(self);}
