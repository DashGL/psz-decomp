// FUN_0203ddfc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203ddfc @ 0x0203ddfc (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/0203ddfc.txt.
 */
void FUN_0203ddfc(char *s) { *(unsigned int *)(s+0xf8)&=~1u; *(unsigned int *)(s+0xf8)&=0xf7ffffff; ((void (*)(void *))(*(void ***)s)[23])(s); }
