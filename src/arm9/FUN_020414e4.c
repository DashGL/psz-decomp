// FUN_020414e4 @ 0x020414e4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020414e4 @ 0x020414e4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/020414e4.txt.
 */
extern void *DAT_02108d64;
extern void FUN_020415f8(void *); extern void FUN_020ba8ac(void *);
void FUN_020414e4(void) { void *p=DAT_02108d64; if(p) { if(p) { FUN_020415f8(p); DAT_02108d64=0; FUN_020ba8ac(p); } DAT_02108d64=0; } }
