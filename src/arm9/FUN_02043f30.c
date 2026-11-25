// FUN_02043f30 @ 0x02043f30 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02043f30 @ 0x02043f30 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Copy triple into +10 of indexed 112-byte record from table +98.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02043f30.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_02043f30(char *self,unsigned int index,const Triple *value) { *(Triple *)(*(char **)(self+0x98)+112*index+16)=*value; }
