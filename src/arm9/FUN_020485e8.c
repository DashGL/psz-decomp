// FUN_020485e8 @ 0x020485e8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020485e8 @ 0x020485e8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/020485e8.txt.
 */
typedef struct { unsigned int x,y,z; } Vector;
void FUN_020485e8(char *s,const Vector *value) { int i; for(i=0;i<3;i++) { char *slot=s+4*i; char *p=*(char **)(slot+8); if(p) *(Vector *)(p+80)=*value; p=*(char **)(slot+0x14); if(p) *(Vector *)(p+80)=*value; } }
