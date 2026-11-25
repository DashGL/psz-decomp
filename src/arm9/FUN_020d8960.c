// FUN_020d8960 @ 0x020d8960 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020d9890(char *);
extern void FUN_020d7c4c(char *);
extern void FUN_020c7bec(char *);
void FUN_020d8960(char *self){FUN_020d9890(self+0x4c);FUN_020d7c4c(self);FUN_020c7bec(self);}
