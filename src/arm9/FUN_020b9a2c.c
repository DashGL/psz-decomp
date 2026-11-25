// FUN_020b9a2c @ 0x020b9a2c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b9a2c @ 0x020b9a2c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare signed incoming value greater than receiver word +c0.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b9a2c.txt.
 */
int FUN_020b9a2c(char *self,int value) { if(value>*(int *)(self+192)) return 1; return 0; }
