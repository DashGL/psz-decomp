// FUN_020302dc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// FUN_020302dc @ 0x020302dc (inventory code 0xc, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Initialize three-byte status to zero, ff, zero; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/020302dc.txt.
 */
void *FUN_020302dc(signed char *self) { self[0]=0; self[1]=-1; self[2]=0; return self; }
