// FUN_020bd430 @ 0x020bd430 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020bdcc0(signed char *);
extern void FUN_020e0df4(void);
void FUN_020bd430(signed char *self){if(self[0x1c]){FUN_020bdcc0(self);FUN_020e0df4();self[0x1c]=11;}}
