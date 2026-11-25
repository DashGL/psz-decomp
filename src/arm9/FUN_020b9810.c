// FUN_020b9810 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b9810 @ 0x020b9810 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read global table for signed selector five through seven.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b9810.txt.
 */
extern char G_020F5B24[];
unsigned int FUN_020b9810(int selector) { if(selector>=5 && selector<=7) return ((unsigned int *)G_020F5B24)[selector-5]; return 0; }
