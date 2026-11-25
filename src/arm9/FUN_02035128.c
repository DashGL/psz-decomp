// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// FUN_02035128 @ 0x02035128 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear flag bit one in indexed 52-byte record byte +40 for signed index [0,11).
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02035128.txt.
 */
typedef struct{unsigned char flags;unsigned char rest[51];}E; typedef struct{unsigned char pad[0x40];E e[11];}O; void FUN_02035128(O *self,int index) { if(index>=0 && index<11) self->e[index].flags&=~2; }
