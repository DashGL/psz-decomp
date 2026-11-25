// FUN_0208b514 @ 0x0208b514 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0208b514 @ 0x0208b514 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map first byte zero/one/other to three/two/one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b514.txt.
 */
int FUN_0208b514(unsigned char *self) { switch(self[0]) { case 0: return 3; case 1: return 2; default: return 1; } }
