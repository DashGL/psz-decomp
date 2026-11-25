// FUN_020b2d34 @ 0x020b2d34 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b2d34 @ 0x020b2d34 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct object with incoming argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2d34.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020b2d4c(void *,void *); void *FUN_020b2d34(void *arg) { void *p=FUN_020ba894(60); if(p) p=FUN_020b2d4c(p,arg); return p; }
