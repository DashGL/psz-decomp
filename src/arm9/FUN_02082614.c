// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets.
// FUN_02082614 @ 0x02082614 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * OR mask into selected byte +1c for valid signed slot [0,4).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082614.txt.
 */
typedef struct{char p[28];unsigned char f[4];}S; void FUN_02082614(S *self,int index,unsigned int mask) { if(index>=0 && index<4) self->f[index]|=mask; }
