// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x1c, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-small-diffs-2026-11-12.md
// FUN_020b45e0 @ 0x020b45e0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release optional global object and clear slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b45e0.txt.
 */
extern void *DAT_0211aa74[];extern void FUN_02046d88(void *); void FUN_020b45e0(void) { void *p=DAT_0211aa74[2]; if(p) { FUN_02046d88(p); DAT_0211aa74[2]=0; } }
