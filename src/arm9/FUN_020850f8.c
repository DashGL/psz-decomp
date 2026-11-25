// FUN_020850f8 @ 0x020850f8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020850f8 @ 0x020850f8 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy source into matching valid global record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020850f8.txt.
 */
extern void FUN_02039534(void *,void *); void FUN_020850f8(int index,void *source) { char *p=*(char **)0x0211a52c; if(p && index>=0 && index<4) { int offset=148*index; if(index==*(int *)(p+offset+136)) FUN_02039534(p+104+offset,source); } }
