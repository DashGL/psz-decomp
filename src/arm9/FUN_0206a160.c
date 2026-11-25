// FUN_0206a160 @ 0x0206a160 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020673d4(unsigned int,unsigned int);
unsigned int FUN_0206a160(void){FUN_020673d4(*(unsigned int *)0x0211a140+4,4);return *(unsigned int *)(*(unsigned int *)0x0211a140+4);}
