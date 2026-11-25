// FUN_0209ec60 @ 0x0209ec60 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209ec60 @ 0x0209ec60 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate singleton and publish to output when initially absent.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ec60.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0209f074(void *); int FUN_0209ec60(void **out) { if(!*(void **)0x0211a628) { void *p=FUN_020ba894(56); if(p) p=FUN_0209f074(p); *out=p; *(void **)0x0211a628=p; return 1; } return 0; }
