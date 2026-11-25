// FUN_020405a8 @ 0x020405a8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_020405a8 @ 0x020405a8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Copy triple to +64, store halfword +70 and mark word +74 active.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/020405a8.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_020405a8(char *self,const Triple *value,unsigned int tag) { *(Triple *)(self+100)=*value; *(unsigned short *)(self+112)=tag; *(unsigned int *)(self+116)=1; }
