// FUN_02034138 @ 0x02034138 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034138 @ 0x02034138 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/02034138.txt.
 */
extern void FUN_02020ba8(void); extern void FUN_02020f10(void); extern void FUN_020ba8c4(void *);
void FUN_02034138(char *s) { FUN_02020ba8(); FUN_02020f10(); *(unsigned int *)(s+0x68)=0; FUN_020ba8c4(*(void **)(s+0x6c)); *(unsigned int *)(s+0x70)=0; FUN_020ba8c4(*(void **)(s+0x74)); }
