// FUN_0202d8a0 @ 0x0202d8a0 (0x58, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived supporting runtime logic.
extern unsigned int FUN_020683d4(void);extern unsigned int FUN_020683e8(unsigned int);
int FUN_0202d8a0(void){unsigned int flags=FUN_020683d4();char **g=(char **)0x02108c0c;char *p=*g;if(!p){FUN_020683e8(flags);return 1;}if(*(int *)(p+0x2260)!=1){FUN_020683e8(flags);return 1;}*g=0;FUN_020683e8(flags);return 0;}
