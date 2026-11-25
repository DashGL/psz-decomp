// FUN_020b5a24 @ 0x020b5a24 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020b5a24 @ 0x020b5a24 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Classify descriptor using two queries, preserving third input in both.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5a24.txt.
 */
extern int FUN_020465c4(void *,int,void *); int FUN_020b5a24(void *unused,void *arg,void *desc) { int result=3; if(FUN_020465c4(arg,1,desc)) result=1; else if(FUN_020465c4(arg,2,desc)) result=0; return result; }
