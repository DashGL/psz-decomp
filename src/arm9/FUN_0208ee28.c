// FUN_0208ee28 @ 0x0208ee28 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0208ee28 @ 0x0208ee28 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate object and initialize with argument if successful.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ee28.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_0208ee40(void *,void *);
void *FUN_0208ee28(void *arg) { void *object=FUN_020ba894(56); if(object) object=FUN_0208ee40(object,arg); return object; }
