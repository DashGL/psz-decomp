// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_02030180 @ 0x02030180 (inventory code 0x2c, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/02030180.txt.
 */
int FUN_02030180(const unsigned char *a,const unsigned char *b) { int i; for(i=0;i<6;i++) if(a[i]!=b[i]) return 0; return 1; }
