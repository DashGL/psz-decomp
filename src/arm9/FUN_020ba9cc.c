// FUN_020ba9cc @ 0x020ba9cc (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020ba9cc @ 0x020ba9cc (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward size of first byte times four to buffer helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba9cc.txt.
 */
extern int FUN_020ba9d8(void *,void *,int); int FUN_020ba9cc(void *self,unsigned char *source) { return FUN_020ba9d8(self,source,source[0]*4); }
