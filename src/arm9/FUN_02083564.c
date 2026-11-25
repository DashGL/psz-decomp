// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// FUN_02083564 @ 0x02083564 (inventory code 0x2a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose nonnull child with lowest signed byte priority below ten.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083564.txt.
 */
void *FUN_02083564(char **self) { char *best=0; int priority=10; unsigned int i=0; for(;i<((unsigned int *)self)[20];i++) { char *p=self[i]; if(p && *(signed char *)(p+13)<priority) { best=p; priority=*(signed char *)(p+13); } } return best; }
