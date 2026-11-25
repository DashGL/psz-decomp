// FUN_02010afc @ 0x02010afc (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern void FUN_02011ac0(unsigned int,unsigned int);
extern void FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_02010afc(void){unsigned int saved=FUN_020683d4(),p=FUN_02011b20(0x021028c0,0);if(p)FUN_02011ac0(0x021028c0,p);FUN_020683e8(saved);return p;}
