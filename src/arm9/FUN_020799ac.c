// FUN_020799ac @ 0x020799ac (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020799ac @ 0x020799ac (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 72-byte object and initialize with supplied argument if nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020799ac.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_020799dc(void *,void *);
void *FUN_020799ac(void *arg) { void *object=FUN_020ba894(72); if(object) object=FUN_020799dc(object,arg); return object; }
