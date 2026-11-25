// FUN_020d8af8 @ 0x020d8af8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020d8ae4(char *);
extern void FUN_020d9074(char *);
void FUN_020d8af8(char *self){FUN_020d8ae4(self);FUN_020d9074(self+0x4c);}
