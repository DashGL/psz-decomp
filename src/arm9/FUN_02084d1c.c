// FUN_02084d1c @ 0x02084d1c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02084d1c @ 0x02084d1c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Classify sentinel, matching identifier or global activity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084d1c.txt.
 */
extern int FUN_02084bf8(void *); int FUN_02084d1c(int a,int b) { if(a==-1) return 0; if(a==b) return 1; if(FUN_02084bf8((void *)0x0211a51c)) return 2; return 3; }
