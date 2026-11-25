// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// FUN_020a13a0 @ 0x020a13a0 (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Divide value by thirty and update mapped statistic for eight valid identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a13a0.txt.
 */
extern signed char D_020f4c88[];
extern unsigned int FUN_0200a5ac(unsigned int,unsigned int); extern void FUN_020a147c(void *,int,unsigned int); void FUN_020a13a0(void *self,unsigned int id,unsigned int value) { unsigned int index=id-61; if(index<8) { unsigned int result=FUN_0200a5ac(value,30); if(result) FUN_020a147c(self,D_020f4c88[index],result); } }
