// FUN_020500b0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020500b0 @ 0x020500b0 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/020500b0.txt.
 */
extern void FUN_0204b130(void *); extern void FUN_020ba8ac(void *);
void *FUN_020500b0(char *s) { *(unsigned int *)s=0x020f929c; if(!*(unsigned int *)(s+0x110)) (*(void (**)(unsigned int,unsigned int))(s+0x104))(*(unsigned int *)(s+0x108),*(unsigned int *)(s+0x10c)); FUN_0204b130(s); FUN_020ba8ac(s); return s; }
