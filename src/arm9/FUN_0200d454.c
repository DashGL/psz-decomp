// FUN_0200d454 @ 0x0200d454 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *FUN_02031a74(void);
extern void FUN_02031bf8(void *);
void FUN_0200d454(void){FUN_02031bf8(FUN_02031a74());}
