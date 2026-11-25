// FUN_0209a8b0 @ 0x0209a8b0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209a8b0 @ 0x0209a8b0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cleanup receiver then release optional allocation and return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a8b0.txt.
 */
extern void FUN_0209b0b8(void *),FUN_020ba8b4(void *); void *FUN_0209a8b0(void **self) { FUN_0209b0b8(self); if(self[3]) { FUN_020ba8b4(self[3]); self[3]=0; } return self; }
