// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Live call-domain proof: notes/sessions/continue-low-fresh-short-review-20261112.md
// All observed live callers pass shift 0, 1 or 2.
// FUN_02036ed0 @ 0x02036ed0 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/02036ed0.txt.
 */
void FUN_02036ed0(char *s,unsigned int shift) { unsigned int mask=1u<<shift; if(*(unsigned int *)(s+0xc8)==mask) { char *p=*(char **)(s+0xc4); if(p) *(unsigned int *)(p+0xe4)&=~1u; } *(unsigned int *)(s+0xc8)&=~mask; }
