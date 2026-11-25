// FUN_020780b4 @ 0x020780b4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020780b4 @ 0x020780b4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate/initialize four-byte object and overwrite global slot even on allocation failure.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020780b4.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02078100(void *);
void FUN_020780b4(void) { void *object=FUN_020ba894(4); if(object) object=FUN_02078100(object); *(void **)0x0211a3b4=object; }
