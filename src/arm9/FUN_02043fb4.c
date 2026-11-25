// FUN_02043fb4 @ 0x02043fb4 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02043fb4 @ 0x02043fb4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02043fb4.txt.
 */
void FUN_02043fb4(char *self,int index,unsigned short value) { char *record=*(char **)(self+0x98)+112*index; *(unsigned short *)(record+68)=value; *(short *)(record+0x46)&=~4; }
