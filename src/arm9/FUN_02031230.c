// FUN_02031230 @ 0x02031230 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031230 @ 0x02031230 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward optional child +28, triple and halfword option.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02031230.txt.
 */
extern void FUN_020405a8(void *,void *,unsigned int);
void FUN_02031230(char *self,void *value,unsigned int tag) { void *child=*(void **)(self+40); if(child) FUN_020405a8(child,value,tag); }
