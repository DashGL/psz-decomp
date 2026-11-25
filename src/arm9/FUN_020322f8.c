// FUN_020322f8 @ 0x020322f8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020322f8 @ 0x020322f8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Clear word +4c, free optional +50 buffer and clear its slot.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020322f8.txt.
 */
extern void FUN_020ba8c4(void *);
void FUN_020322f8(char *self) { *(unsigned int *)(self+76)=0; if(*(void **)(self+80)) { FUN_020ba8c4(*(void **)(self+80)); *(void **)(self+80)=0; } }
