// FUN_02077958 @ 0x02077958 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077958 @ 0x02077958 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate 316-byte singleton and initialize it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077958.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02077800(void *);
void FUN_02077958(void) { if(!*(void **)0x0211a3ac) { void *object=FUN_020ba894(316); if(object) object=FUN_02077800(object); *(void **)0x0211a3ac=object; } }
