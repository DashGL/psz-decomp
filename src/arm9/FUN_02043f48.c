// FUN_02043f48 @ 0x02043f48 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02043f48 @ 0x02043f48 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02043f48.txt.
 */
typedef struct { unsigned int word[9]; } Record;
void FUN_02043f48(char *s,int index,const Record *src) { char *p=*(char **)(s+0x98)+112*index; *(Record *)(p+0x1c)=*src; *(short *)(p+0x46)|=4; }
