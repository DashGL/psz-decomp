// FUN_02080d20 @ 0x02080d20 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02080d20 @ 0x02080d20 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy 772 bytes from second argument to first using source-first helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080d20.txt.
 */
extern void FUN_020655d8(void *,void *,unsigned int);
void FUN_02080d20(void *dest,void *source) { FUN_020655d8(source,dest,772); }
