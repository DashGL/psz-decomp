// FUN_02049944 @ 0x02049944 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_02049944 @ 0x02049944 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Store word +128 and multiply its value plus 30 by word +4c into +48; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02049944.txt.
 */
void *FUN_02049944(char *self,unsigned int value) { *(unsigned int *)(self+0x128)=value; *(unsigned int *)(self+0x48)=(*(unsigned int *)(self+0x128)+30)*(*(unsigned int *)(self+0x4c)); return self; }
