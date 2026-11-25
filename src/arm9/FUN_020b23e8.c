// FUN_020b23e8 @ 0x020b23e8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b23e8 @ 0x020b23e8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select indexed word using random count helper if count positive, else minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b23e8.txt.
 */
extern int FUN_020832b4(int); int FUN_020b23e8(int *self) { if(self[7]>0) return self[FUN_020832b4(self[7])]; return -1; }
