// FUN_0207f9d0 @ 0x0207f9d0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f9d0 @ 0x0207f9d0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 76 bytes and initialize with supplied argument if allocation succeeds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f9d0.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_0207f9e8(void *,void *);
void *FUN_0207f9d0(void *arg) { void *object=FUN_020ba894(76); if(object) object=FUN_0207f9e8(object,arg); return object; }
