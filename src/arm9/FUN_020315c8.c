// FUN_020315c8 @ 0x020315c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020315c8 @ 0x020315c8 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Run global cleanup helpers, touch global object, then clear returned singleton buffers.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/020315c8.txt.
 */
extern void FUN_02045a38(void),FUN_02045854(void),FUN_02040228(void *),FUN_020322f8(void *);
extern void *FUN_02031a74(void);
void FUN_020315c8(void) { FUN_02045a38(); FUN_02045854(); FUN_02040228(*(void **)0x02108d5c); FUN_020322f8(FUN_02031a74()); }
