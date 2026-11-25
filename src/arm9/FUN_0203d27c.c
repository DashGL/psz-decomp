// FUN_0203d27c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203d27c @ 0x0203d27c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0203d27c.txt.
 */
int FUN_0203d27c(char *s) { unsigned int flags=*(unsigned int *)(s+0x250); if(!(flags&1) && !(flags&8) && ((int (*)(void *))(*(void ***)s)[39])(s)) return 1; return 0; }
