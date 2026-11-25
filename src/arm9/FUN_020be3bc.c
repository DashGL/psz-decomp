// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020be3bc @ 0x020be3bc (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Disconnect valid active descriptor slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be3bc.txt.
 */
extern void FUN_020e143c(unsigned int),FUN_020bdd0c(void *,unsigned int); struct S_020be3bc { char pad[12]; signed char active[4]; };
void FUN_020be3bc(struct S_020be3bc *self,unsigned char *desc) { unsigned int index=desc[4]; if(index<4 && self->active[index]) { FUN_020e143c(index); FUN_020bdd0c(self,index); } }
