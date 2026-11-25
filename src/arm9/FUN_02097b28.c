// FUN_02097b28 @ 0x02097b28 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02097b28 @ 0x02097b28 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate singleton only when absent, publishing to output and global.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097b28.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02097b98(void *); int FUN_02097b28(void **out) { if(!*(void **)0x0211a610) { void *p=FUN_020ba894(300); if(p) p=FUN_02097b98(p); *out=p; *(void **)0x0211a610=p; return 1; } return 0; }
