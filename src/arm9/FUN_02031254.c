// FUN_02031254 @ 0x02031254 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031254 @ 0x02031254 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Forward optional child +28 and two output pointers; absent child clears triple and halfword outputs.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02031254.txt.
 */
extern void FUN_02040570(void *,unsigned int *,unsigned short *);
void FUN_02031254(char *self,unsigned int *value,unsigned short *tag) { void *child=*(void **)(self+40); if(child) FUN_02040570(child,value,tag); else { value[2]=0; value[1]=0; value[0]=0; *tag=0; } }
