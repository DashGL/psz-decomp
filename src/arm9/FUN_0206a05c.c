// FUN_0206a05c @ 0x0206a05c (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02066eec(void);
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_0206a05c(void){unsigned int saved,status;if(!FUN_02066eec())return 1;saved=FUN_020683d4();*(volatile unsigned int *)0x04fff200=16;status=*(volatile unsigned int *)0x04fff200;FUN_020683e8(saved);return status!=0;}
