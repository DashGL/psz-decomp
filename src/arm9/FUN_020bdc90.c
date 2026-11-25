// FUN_020bdc90 @ 0x020bdc90 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e34fc(void);
int FUN_020bdc90(signed char *self){switch(self[0x1c]){case 5:case 6:case 8:case 9:FUN_020e34fc();return 1;default:return 0;}}
