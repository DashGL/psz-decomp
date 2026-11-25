// FUN_020bcaf0 @ 0x020bcaf0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bcaf0 @ 0x020bcaf0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate12-byte object and construct.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bcaf0.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020bcb04(void *); void *FUN_020bcaf0(void) { void *p=FUN_020ba894(12); if(p) p=FUN_020bcb04(p); return p; }
