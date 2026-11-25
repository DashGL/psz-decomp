// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// Typed array-layout evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned int header,values[8];}Child_02051c38;
// FUN_02051c38 @ 0x02051c38 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Read indexed child word +4 for signed index [0,8), or zero if absent/invalid.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02051c38.txt.
 */
unsigned int FUN_02051c38(char *self,int index) { Child_02051c38 *child=*(Child_02051c38 **)(self+100); if(child && index>=0 && index<8) return child->values[index]; return 0; }
