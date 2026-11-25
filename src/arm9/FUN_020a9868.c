// FUN_020a9868 @ 0x020a9868 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a9868 @ 0x020a9868 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check scroll bound for positive or nonpositive movement.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9868.txt.
 */
int FUN_020a9868(int *self,int delta) { int count=self[4]; if(count>3) { if(delta>0) { if(self[6]<count-3) return 1; } else if(self[6]+delta>=0) return 1; } return 0; }
