// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b28c[];
// FUN_020ba918 @ 0x020ba918 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate under saved interrupt state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba918.txt.
 */
extern unsigned int FUN_020683d4(void); extern void FUN_020683e8(unsigned int); extern void *FUN_020121ac(void *,unsigned int,int); void *FUN_020ba918(unsigned int size) { unsigned int state=FUN_020683d4(); void *p=FUN_020121ac(*(void **)((unsigned int)DAT_0211b28c + 4u),size,16); FUN_020683e8(state); return p; }
