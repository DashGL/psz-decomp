// FUN_020459a4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020459a4 @ 0x020459a4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/020459a4.txt.
 */
extern char DAT_02108dd0[];
extern int FUN_02078188(int);
int FUN_020459a4(int id) { if(FUN_02078188(id) && ((void **)DAT_02108dd0)[id]) return 1; return 0; }
