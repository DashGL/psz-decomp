// FUN_0209e350 @ 0x0209e350 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0209e350 @ 0x0209e350 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Flatten signed descriptor dimensions by category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e350.txt.
 */
int FUN_0209e350(signed char *self){int result=0;if(self[32]==0)result=self[33]+2*self[34];else if(self[32]==1)result=6+self[34]+self[33];else if(self[32]==2)result=self[33]+(10+2*self[34]);return result;}
