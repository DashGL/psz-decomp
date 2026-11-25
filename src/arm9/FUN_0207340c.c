// FUN_0207340c @ 0x0207340c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_0207340c @ 0x0207340c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require global state one and two absent global predicates.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207340c.txt.
 */
extern int FUN_020c4848(void),FUN_020872c4(void *),FUN_020c2e38(void); extern void *FUN_02086e3c(void); int FUN_0207340c(void) { if(FUN_020c4848()==1 && !FUN_020872c4(FUN_02086e3c()) && !FUN_020c2e38()) return 1; return 0; }
