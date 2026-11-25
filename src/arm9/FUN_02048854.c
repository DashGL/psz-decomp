// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02048854 @ 0x02048854
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned short D_020ed630[];
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * For signed selector below six, store table halfword at +114; target has no negative guard.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02048854.txt.
 */
void FUN_02048854(char *self,int selector) { if(selector<6) *(unsigned short *)(self+0x114)=D_020ed630[selector]; }
