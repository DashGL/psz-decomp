// FUN_0203cfe0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203cfe0 @ 0x0203cfe0 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/0203cfe0.txt.
 */
int FUN_0203cfe0(char *s) { unsigned int flags=*(unsigned int *)(s+0x250); if(!(flags&1) && !(flags&8) && *(unsigned int *)(s+0x240)<9 && ((int (*)(void *))(*(void ***)s)[52])(s)!=1) return 1; return 0; }
