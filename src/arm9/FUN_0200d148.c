// FUN_0200d148 @ 0x0200d148 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *D_02101df8;
extern void *FUN_0200d1a8(void *);
extern void FUN_020ba8ac(void *);
void FUN_0200d148(void){void *p=D_02101df8;if(p){if(p){FUN_0200d1a8(p);FUN_020ba8ac(p);}D_02101df8=0;}}
