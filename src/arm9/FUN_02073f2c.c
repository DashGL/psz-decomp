// FUN_02073f2c @ 0x02073f2c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073f2c @ 0x02073f2c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report whether mode getter returns a value other than -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073f2c.txt.
 */
extern int FUN_02073f44(void);
int FUN_02073f2c(void) { if(FUN_02073f44()!=-1) return 1; return 0; }
