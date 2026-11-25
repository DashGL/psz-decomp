// FUN_02040198 @ 0x02040198 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040198 @ 0x02040198 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02040198.txt.
 */
extern void FUN_020ba8c4(void *);
void FUN_02040198(char *s) { int i; if(*(void **)(s+0x20)) { FUN_020ba8c4(*(void **)(*(char **)(s+0x20)+4)); for(i=0;i<2;i++) FUN_020ba8c4(*(void **)(*(char **)(s+0x20)+8+8*i)); FUN_020ba8c4(*(void **)(s+0x20)); *(void **)(s+0x20)=0; } }
