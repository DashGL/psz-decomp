// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// FUN_020782e8 @ 0x020782e8 (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy optional global descriptor and clear available flag.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020782e8.txt.
 */
extern unsigned short D_0211a3b8;
extern void *FUN_02078310(void); extern void FUN_02078268(void *,void *); int FUN_020782e8(void *out) { void *p=FUN_02078310(); if(p) { FUN_02078268(out,p); D_0211a3b8&=~1u; return 1; } return 0; }
