// FUN_0203bee0 @ 0x0203bee0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bee0 @ 0x0203bee0 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 113.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b113/0203bee0.txt.
 */
extern int FUN_020513dc(unsigned int);extern double FUN_020088f4(int),FUN_02008970(double,double);extern int FUN_0200881c(double);int FUN_0203bee0(char *s){if(FUN_020513dc(*(unsigned int *)0x0210e24c))return *(int *)(s+264);return FUN_0200881c(FUN_02008970(1.2,FUN_020088f4(*(int *)(s+264))));}
