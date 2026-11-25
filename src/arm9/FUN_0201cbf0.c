// FUN_0201cbf0 @ 0x0201cbf0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_0205e5a4(void);
extern void FUN_02019630(void);
unsigned int FUN_0201cbf0(void){unsigned int value;FUN_0205e5a4();FUN_02019630();value=(*(volatile unsigned int *)0x04000600&0x3fffffff)|0x80000000;*(volatile unsigned int *)0x04000600=value;return value;}
