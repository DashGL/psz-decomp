// FUN_0208ee0c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0208ee0c @ 0x0208ee0c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read two-entry global table for valid signed index, default -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ee0c.txt.
 */
extern char G_020FAB30[];
int FUN_0208ee0c(int index) { if(index>=0 && index<2) return ((int *)G_020FAB30)[index]; return -1; }
