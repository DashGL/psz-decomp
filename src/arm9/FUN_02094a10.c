// FUN_02094a10 @ 0x02094a10 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02094a10 @ 0x02094a10 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch changed signed selector with current halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094a10.txt.
 */
extern void FUN_0208ddcc(void *,int,int,unsigned int); void FUN_02094a10(char *self,int value) { if(self && *(signed char *)(self+511)!=value) FUN_0208ddcc((void *)0x0211a5c4,*(int *)(self+252),value,*(unsigned short *)(self+192)); }
