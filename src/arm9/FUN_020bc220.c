// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020bc220 @ 0x020bc220
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0211b360[];
/* USA ROM reconstruction, 2026-11-04.
 * Query rectangle only when global input flag set.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc220.txt.
 */
extern int FUN_020bc2ac(void *); int FUN_020bc220(void *rectangle) { int result=D_0211b360[3]; if(result) result=FUN_020bc2ac(rectangle); return result; }
