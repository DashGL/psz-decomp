// FUN_02010aac @ 0x02010aac (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern void FUN_02011ac0(unsigned int,unsigned int);
extern void FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_02010aac(unsigned int list){unsigned int saved=FUN_020683d4(),p=FUN_02011b20(list,0),owner;if(p){FUN_02011ac0(list,p);owner=*(unsigned int *)(p+8);*(unsigned int *)(owner+284)=*(unsigned int *)(owner+284)-1;}FUN_020683e8(saved);return p;}
