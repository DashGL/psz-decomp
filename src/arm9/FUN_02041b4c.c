// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_02041b4c @ 0x02041b4c
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Select embedded +28 for zero selector, otherwise +36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02041b4c.txt.
 */
void *FUN_02041b4c(char *self,int selector) { if(selector==0) return self+0x28; else return self+0x36; }
