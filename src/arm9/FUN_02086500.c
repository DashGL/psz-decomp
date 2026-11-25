// FUN_02086500 @ 0x02086500 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02086500 @ 0x02086500 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy four halfwords to valid indexed global slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086500.txt.
 */
extern void FUN_0204e5f4(void *,void *); void FUN_02086500(void *source,int index) { char *p=*(char **)0x0211a52c; if(p && index>=0 && index<4) FUN_0204e5f4(p+608+8*index,source); }
