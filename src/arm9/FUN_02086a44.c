// FUN_02086a44 @ 0x02086a44 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02086a44 @ 0x02086a44 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test whether either supported entity identifier resolves.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086a44.txt.
 */
extern int FUN_02078188(int),FUN_02078198(int);extern void *FUN_02086a1c(int),*FUN_020352a4(void *,int),*FUN_020352c0(void *);int FUN_02086a44(int id){if(FUN_02078188(id)){if(FUN_02086a1c(id))return 1;return 0;}if(FUN_02078198(id)){if(FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,id)))return 1;return 0;}return 0;}
