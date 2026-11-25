// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_0209e294 @ 0x0209e294 (inventory code 0x1e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve two-level halfword offset table into byte pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e294.txt.
 */
void *FUN_0209e294(void **self,unsigned int index,unsigned int offset) { unsigned short *first=self[1]; if(first) { char *base=self[3]; unsigned short *second=self[2]; unsigned int k=first[index]; return base+second[k+offset]; } return 0; }
