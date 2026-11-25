// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02108c74[];
// FUN_02034464 @ 0x02034464 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Forward optional global object to update/reset helper; callee incoming receiver only.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02034464.txt.
 */
extern void FUN_02034410(void *);
void FUN_02034464(void) { void *object=((void **)((unsigned int)DAT_02108c74 + 0u))[4]; if(object) FUN_02034410(object); }
