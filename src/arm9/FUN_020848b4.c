// FUN_020848b4 @ 0x020848b4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020848b4 @ 0x020848b4 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run cleanup helper, release optional allocation at word zero, clear two words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020848b4.txt.
 */
extern void FUN_020ba494(void *), FUN_020ba8c4(void *);
void FUN_020848b4(void **self) { FUN_020ba494(self); if(self[0]) { FUN_020ba8c4(self[0]); self[0]=0; } self[1]=0; }
