// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { void * field_0; } DAT_02108c68;
// FUN_02033270 @ 0x02033270 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear global before freeing optional object and again afterward.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02033270.txt.
 */
extern void FUN_020ba8ac(void *);
void FUN_02033270(void) { void *object=DAT_02108c68.field_0; if(object) { if(object) { DAT_02108c68.field_0=0; FUN_020ba8ac(object); } DAT_02108c68.field_0=0; } }
