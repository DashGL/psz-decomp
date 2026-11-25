// FUN_02031220 @ 0x02031220 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031220 @ 0x02031220 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Forward optional child +28, triple, tag and forced option one.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02031220.txt.
 */
extern void FUN_020403d0(void *,void *,unsigned int,int);
void FUN_02031220(char *self,void *value,unsigned int tag) { void *child=*(void **)(self+40); if(child) FUN_020403d0(child,value,tag,1); }
