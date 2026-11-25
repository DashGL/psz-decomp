// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_02032fc4 @ 0x02032fc4 (inventory code 0x1c, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Test mask against selected byte +1c for signed slot [0,4).
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02032fc4.txt.
 */
int FUN_02032fc4(unsigned char *self,int index,unsigned int mask) { if(index>=0 && index<4) { if((self+index)[28]&mask) return 1; return 0; } return 0; }
