// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// FUN_02095834 @ 0x02095834 (inventory code 0x1e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy embedded descriptor if tag zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095834.txt.
 */
extern void FUN_02039534(void *,void *); int FUN_02095834(unsigned char *self,void *dest) { if(self[384]==0) { FUN_02039534(dest,self+384); return 1; } return 0; }
