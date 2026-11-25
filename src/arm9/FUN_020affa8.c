// FUN_020affa8 @ 0x020affa8 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020affa8 @ 0x020affa8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check updated offset within zero to capacity minus three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020affa8.txt.
 */
int FUN_020affa8(int *self,int delta) { int value=self[2]+delta; if(value>=0 && value<=self[1]-3) return 1; return 0; }
