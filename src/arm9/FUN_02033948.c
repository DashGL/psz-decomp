// FUN_02033948 @ 0x02033948 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033948 @ 0x02033948 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Install dispatch table then run two receiver cleanup helpers; return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02033948.txt.
 */
extern void FUN_02033b58(void *),FUN_020338a8(void *);
void *FUN_02033948(unsigned int *self) { self[0]=0x020f6d28; FUN_02033b58(self); FUN_020338a8(self); return self; }
