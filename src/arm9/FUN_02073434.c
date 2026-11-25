// FUN_02073434 @ 0x02073434 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073434 @ 0x02073434 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query active mode after global readiness checks.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073434.txt.
 */
extern int FUN_0207340c(void),FUN_02073f2c(void); int FUN_02073434(void) { char *g=(char *)0x0211a210; if(FUN_0207340c()) { switch(((signed char *)g)[4]) { case 2: { int *p=*(int **)(g+36); if(p) return p[8]==3; break; } case 3:return FUN_02073f2c(); } } return 0; }
