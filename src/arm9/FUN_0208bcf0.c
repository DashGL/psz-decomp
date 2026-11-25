// FUN_0208bcf0 @ 0x0208bcf0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0208bcf0 @ 0x0208bcf0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate and initialize global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bcf0.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_0208bc20(void *);
void FUN_0208bcf0(void) { if(!*(void **)0x0211a56c) { void *object=FUN_020ba894(88); if(object) object=FUN_0208bc20(object); *(void **)0x0211a56c=object; } }
