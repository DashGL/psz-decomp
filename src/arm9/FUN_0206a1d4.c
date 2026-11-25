// FUN_0206a1d4 @ 0x0206a1d4 (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020673d4(unsigned int,unsigned int);
int FUN_0206a1d4(unsigned int index){FUN_020673d4(*(unsigned int *)0x0211a140+608+index*2,2);return *(short *)(*(unsigned int *)0x0211a140+index*2+608);}
