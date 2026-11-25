// FUN_0203e418 @ 0x0203e418 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e418 @ 0x0203e418 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0203e418.txt.
 */
extern void FUN_020949e4(void *,unsigned int);
void FUN_0203e418(char *s) { if(*(int *)(s+0x240)==8) { FUN_020949e4(s,*(unsigned int *)(s+0xe18)); *(unsigned int *)(s+0xe18)=~0u; } }
