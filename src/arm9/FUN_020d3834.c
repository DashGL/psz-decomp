// FUN_020d3834 @ 0x020d3834 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020d4ab0(void *);
extern int FUN_020d37d0(void *,int,int);
int FUN_020d3834(void *self){if(FUN_020d4ab0(self))return FUN_020d37d0(self,1,4);return 0;}
