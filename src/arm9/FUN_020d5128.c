// FUN_020d5128 @ 0x020d5128 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020d36ec(void *);
extern int FUN_020d2bec(void *);
extern void FUN_020d4d60(void *);
void FUN_020d5128(int *self){if(!self[6]){self[6]=1;FUN_020d36ec(self);if(FUN_020d2bec(self))FUN_020d4d60(self);}}
