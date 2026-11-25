// FUN_02030dd0 @ 0x02030dd0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030dd0 @ 0x02030dd0 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Build four-byte descriptor from input and submit to captured global receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02030dd0.txt.
 */
extern void *FUN_02030da8(void *,void *), *FUN_02030a98(void *,void *);
void *FUN_02030dd0(void *arg) { unsigned int temp; void *manager=*(void **)0x02108c54; FUN_02030da8(&temp,arg); return FUN_02030a98(manager,&temp); }
