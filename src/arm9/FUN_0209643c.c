// FUN_0209643c @ 0x0209643c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209643c @ 0x0209643c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate global 48-byte object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209643c.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020965b0(void *); void FUN_0209643c(void) { if(!*(void **)0x0211a600) { void *p=FUN_020ba894(48); if(p) p=FUN_020965b0(p); *(void **)0x0211a600=p; } }
