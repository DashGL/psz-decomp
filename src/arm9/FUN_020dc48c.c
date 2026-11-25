// FUN_020dc48c @ 0x020dc48c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void *FUN_020dac74(unsigned int);
extern int FUN_020df4f8(void *);
extern void FUN_020dad18(int);
int FUN_020dc48c(void){if(FUN_020df4f8(FUN_020dac74(8))){FUN_020dad18(3);return 17;}return 14;}
