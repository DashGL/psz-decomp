// FUN_02046b20 @ 0x02046b20 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046b20 @ 0x02046b20 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02046b20.txt.
 */
extern void FUN_02018cec(void *,void *); extern void FUN_020ba8c4(void *);
void FUN_02046b20(char *s) { if(*(unsigned int *)(s+4)&0x40) { void *p=*(void **)(*(char **)(s+0x14)+0x10); if(p) { FUN_02018cec(*(void **)(s+0x10),p); FUN_020ba8c4(p); *(unsigned int *)(s+4)&=~0x40u; *(unsigned int *)(*(char **)(s+0x14)+4)=4096; } } }
