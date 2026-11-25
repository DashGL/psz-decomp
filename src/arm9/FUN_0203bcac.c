// FUN_0203bcac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203bcac @ 0x0203bcac (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Read signed selector [0,18) from fixed word table, otherwise fallback three; receiver unused.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203bcac.txt.
 */
extern char G_020ED1BC[];
unsigned int FUN_0203bcac(void *unused,int index) { if(index>=0 && index<18) return ((unsigned int *)G_020ED1BC)[index]; return 3; }
