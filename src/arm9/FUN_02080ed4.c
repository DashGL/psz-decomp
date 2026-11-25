// FUN_02080ed4 @ 0x02080ed4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02080ed4 @ 0x02080ed4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test global mode word +c for unsigned range 4..5.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080ed4.txt.
 */
extern unsigned int *FUN_0200d16c(void);
int FUN_02080ed4(void) { if(FUN_0200d16c()[3]-4u<=1) return 1; return 0; }
