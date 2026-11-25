// FUN_02090754 @ 0x02090754 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02090754 @ 0x02090754 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit action-two message for nonnull receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02090754.txt.
 */
extern void FUN_0208d638(void *,int,void *,unsigned int,int); int FUN_02090754(char *self) { if(self) { FUN_0208d638((void *)0x0211a578,*(int *)(self+252),self+156,*(unsigned short *)(self+192),2); return 1; } return 0; }
