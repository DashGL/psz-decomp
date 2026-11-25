// FUN_0204fbec @ 0x0204fbec (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fbec @ 0x0204fbec (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/0204fbec.txt.
 */
extern void FUN_020480b8(void *,int);
void FUN_0204fbec(char *self,int value) { if(*(void **)(self+0x14)) FUN_020480b8(*(void **)(self+0x14),value); if(*(void **)(self+0x18)) FUN_020480b8(*(void **)(self+0x18),value); }
