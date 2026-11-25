// FUN_0209e31c @ 0x0209e31c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209e31c @ 0x0209e31c (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reject out-of-range descriptor dimensions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e31c.txt.
 */
int FUN_0209e31c(signed char *self){if(self[32]<0 || self[32]>=3)return 1;if(self[34]<0 || self[34]>=3)return 1;if(self[33]<0 || self[33]>=2)return 1;return 0;}
