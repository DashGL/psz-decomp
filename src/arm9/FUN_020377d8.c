// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f6fb0[];
extern unsigned char DAT_020f6fcc[];
// FUN_020377d8 @ 0x020377d8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Install base table, clear words +4/+8, then install derived table; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020377d8.txt.
 */
void *FUN_020377d8(unsigned int *self) { self[0]=((unsigned int)DAT_020f6fb0 + 0u); self[1]=0; self[2]=0; self[0]=((unsigned int)DAT_020f6fcc + 0u); return self; }
