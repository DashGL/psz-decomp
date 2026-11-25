// FUN_0204f24c @ 0x0204f24c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f24c @ 0x0204f24c (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/0204f24c.txt.
 */
extern int FUN_02078188(int); extern int FUN_02078198(int);
unsigned int FUN_0204f24c(int a,int b) { unsigned int result=10; if(FUN_02078188(a)) { if(b==a) a=0; else if(a==0) a=b; result+=10u*a; } else if(FUN_02078198(a)) result+=10u*((unsigned int)a-4); return result; }
