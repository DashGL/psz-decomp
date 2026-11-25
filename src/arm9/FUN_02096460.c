// FUN_02096460 @ 0x02096460 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02096460 @ 0x02096460 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy singleton with nested null guards.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096460.txt.
 */
extern void FUN_020964f4(void *),FUN_020ba8ac(void *); void FUN_02096460(void) { void *p=*(void **)0x0211a600; if(p) { if(p) { if(p) { FUN_020964f4(p); FUN_020ba8ac(p); } *(void **)0x0211a600=0; } } }
