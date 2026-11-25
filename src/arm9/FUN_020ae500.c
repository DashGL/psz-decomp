// FUN_020ae500 @ 0x020ae500 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020ae500 @ 0x020ae500 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three incoming values with fourth argument zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ae500.txt.
 */
extern int FUN_020ae50c(void *,unsigned int,int,unsigned short); int FUN_020ae500(void *self,unsigned int a,int b) { return FUN_020ae50c(self,a,b,0); }
