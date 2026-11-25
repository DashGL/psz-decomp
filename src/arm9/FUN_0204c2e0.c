// FUN_0204c2e0 @ 0x0204c2e0 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c2e0 @ 0x0204c2e0 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/0204c2e0.txt.
 */
extern void FUN_0204cdf4(void *); extern void FUN_0204d6b4(void *); extern void FUN_0204b130(void *);
void *FUN_0204c2e0(char *s) { *(unsigned int *)s=0x020f91e8; if(*(void **)(s+0x118)) { FUN_0204cdf4(*(void **)(s+0x118)); *(void **)(s+0x118)=0; } if(*(void **)(s+0x11c)) { FUN_0204d6b4(*(void **)(s+0x11c)); *(void **)(s+0x11c)=0; } FUN_0204b130(s); return s; }
