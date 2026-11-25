// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// FUN_0209a4d4 @ 0x0209a4d4 (inventory code 0x1a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map signed global state one/two/other to four/five/three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a4d4.txt.
 */
extern signed char D_0211a3c4[];
int FUN_0209a4d4(void) { int value=D_0211a3c4[13]; if(value==1) return 4; if(value==2) return 5; return 3; }
