// FUN_0207dd58 @ 0x0207dd58 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207dd58 @ 0x0207dd58 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct object, then initialize with two incoming arguments if nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207dd58.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0207dd84(void *); extern void FUN_0207ddec(void *,void *,unsigned int); void *FUN_0207dd58(void *arg,unsigned int value) { void *p=FUN_020ba894(288); if(p) p=FUN_0207dd84(p); if(p) FUN_0207ddec(p,arg,value); return p; }
