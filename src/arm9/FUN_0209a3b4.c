// FUN_0209a3b4 @ 0x0209a3b4 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0209a3b4 @ 0x0209a3b4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test signed-byte mask for index below four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a3b4.txt.
 */
int FUN_0209a3b4(signed char *self,int index) { if(index<4) { signed char mask=(signed char)(1u<<index); if(self[204]&mask) return 1; return 0; } return 0; }
