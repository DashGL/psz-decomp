// FUN_020949e4 @ 0x020949e4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020949e4 @ 0x020949e4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark pending state and dispatch non-sentinel identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020949e4.txt.
 */
extern void FUN_0208dcec(void *,unsigned int,unsigned int); void FUN_020949e4(char *self,int value) { if(self && value!=-1) { self[512]=-10; FUN_0208dcec((void *)0x0211a5c4,*(unsigned int *)(self+252),value); } }
