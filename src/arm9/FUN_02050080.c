// FUN_02050080 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02050080 @ 0x02050080 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02050080.txt.
 */
extern void FUN_0204b130(void *);
void *FUN_02050080(char *s) { *(unsigned int *)s=0x020f929c; if(!*(unsigned int *)(s+0x110)) (*(void (**)(unsigned int,unsigned int))(s+0x104))(*(unsigned int *)(s+0x108),*(unsigned int *)(s+0x10c)); FUN_0204b130(s); return s; }
