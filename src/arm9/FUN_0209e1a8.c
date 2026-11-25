// FUN_0209e1a8 @ 0x0209e1a8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209e1a8 @ 0x0209e1a8 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve category-six string for one-based index below45.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e1a8.txt.
 */
extern void *FUN_0209e294(void *,unsigned int,unsigned int); void *FUN_0209e1a8(int index) { void **p=*(void ***)0x0211a624; if(p && p[0] && index>=1 && index<45) return FUN_0209e294(p[0],6,index-1); return 0; }
