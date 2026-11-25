// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021116a0[];
// FUN_02055b9c @ 0x02055b9c (inventory code 0x18, arm)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 91.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b91/02055b9c.txt.
 */
int FUN_02055b9c(void){return !(*(unsigned int *)((unsigned int)DAT_021116a0 + 276u)&4);}
