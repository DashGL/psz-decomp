// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_02084b14 @ 0x02084b14 (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find first matching signed byte in eight-entry table, else -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084b14.txt.
 */
extern signed char D_020f2fd0[];
int FUN_02084b14(int value) { int i; for(i=0;i<8;i++) if(value==D_020f2fd0[i]) return i; return -1; }
