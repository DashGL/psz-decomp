// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// FUN_0203510c @ 0x0203510c
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Set flag bit one in indexed 52-byte record byte +40 for signed index [0,11).
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203510c.txt.
 */
void FUN_0203510c(unsigned char *self,int index) { if(index>=0 && index<11) (self+0x40)[52*index]|=2; }
