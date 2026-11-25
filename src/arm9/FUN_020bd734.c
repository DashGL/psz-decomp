// FUN_020bd734 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_020bd734 @ 0x020bd734 (inventory code 0x12, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward fourth incoming argument as slot to optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd734.txt.
 */
extern void * D_0211b3bc[];
extern void FUN_020bdd0c(void *,int); void FUN_020bd734(unsigned int a,unsigned int b,unsigned int c,int slot) { void *p=D_0211b3bc[2]; if(p) FUN_020bdd0c(p,slot); }
