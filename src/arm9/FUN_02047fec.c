// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_02047fec @ 0x02047fec
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Copy 36 input bytes to global matrix then clear a4 flag bits in adjacent global state.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02047fec.txt.
 */
extern unsigned int data_0210579c[];
extern void FUN_0206564c(const void *,void *);
void FUN_02047fec(const void *matrix) { FUN_0206564c(matrix,(void *)0x021057d8); (data_0210579c)[31]&=~0xa4u; }
