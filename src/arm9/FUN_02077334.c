// FUN_02077334 @ 0x02077334 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077334 @ 0x02077334 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize object with forwarded argument, preserving null allocation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077334.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02077370(void *,void *);
void *FUN_02077334(void *arg) { void *object=FUN_020ba894(104); if(object) object=FUN_02077370(object,arg); return object; }
